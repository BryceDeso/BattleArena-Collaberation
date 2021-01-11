#include "Scene.h"

Scene::Scene()
{
    m_actorCount = 0;
    m_actors = new Actor*[0];
    m_world = new MathLibrary::Matrix3();
}

MathLibrary::Matrix3* Scene::getWorld()
{
    return m_world;
}

void Scene::addActor(Actor* actor)
{
    //Create a new array with a size one greater than our old array
    Actor** appendedArray = new Actor * [m_actorCount + 1];
    //Copy the values from the old array to the new array
    for (int i = 0; i < m_actorCount; i++)
    {
        appendedArray[i] = m_actors[i];
    }

    //Set the last value in the new array to be the actor we want to add
    appendedArray[m_actorCount] = actor;
    //Set old array to hold the values of the new array
    m_actors = appendedArray;
    m_actorCount++;

    for (int i = 0; i < actor->getChildCount(); i++)
    {
        addActor(actor->getChildren()[i]);
    }
}

bool Scene::removeActor(int index)
{
    //Check to see if the index is outside the bounds of our array
    if (index < 0 || index >= m_actorCount)
    {
        return false;
    }

    bool actorRemoved = false;

    //Create a new array with a size one less than our old array 
    Actor** newArray = new Actor * [m_actorCount - 1];
    //Create variable to access tempArray index
    int j = 0;
    //Copy values from the old array to the new array
    for (int i = 0; i < m_actorCount; i++)
    {
        //If the current index is not the index that needs to be removed,
        //add the value into the old array and increment j
        if (i != index)
        {
            newArray[j] = m_actors[i];
            j++;
        }
        else
        {
            delete m_actors[i];
            actorRemoved = true;
        }
    }

    //Set the old array to be the tempArray
    m_actors = newArray;
    m_actorCount--;
    return actorRemoved;
}

bool Scene::removeActor(Actor* actor)
{
    //Check to see if the actor was null
    if (!actor)
    {
        return false;
    }

    bool actorRemoved = false;
    //Create a new array with a size one less than our old array
    Actor** newArray = new Actor * [m_actorCount + 1];
    //Create variable to access tempArray index
    int j = 0;
    //Copy values from the old array to the new array
    for (int i = 0; i < m_actorCount; i++)
    {
        if (actor != m_actors[i])
        {
            newArray[j] = m_actors[i];
            j++;
        }
        else
        {
            actorRemoved = true;
        }
    }
    //Set the old array to the new array
    m_actors = newArray;
    m_actorCount--;
    //Return whether or not the removal was successful
    return actorRemoved;
}

void Scene::start()
{
    m_started = true;
}

void Scene::checkCollision()
{
    for (int i = 0; i < m_actorCount; i++)
    {
        for (int j = 0; j < m_actorCount; j++)
        {
            if (i >= m_actorCount)
                break;

            if (m_actors[i]->checkCollision(m_actors[j]) && i != j)
                m_actors[i]->onCollision(m_actors[j]);
        }
    }
}

void Scene::update(float deltaTime)
{
    for (int i = 0; i < m_actorCount; i++)
    {
        if (!m_actors[i]->getStarted())
            m_actors[i]->start();

        m_actors[i]->update(deltaTime);
    }
    checkCollision();
}

void Scene::draw()
{
    for (int i = 0; i < m_actorCount; i++)
    {
        m_actors[i]->draw();
    }
}

void Scene::debug()
{
    for (int i = 0; i < m_actorCount; i++)
    {
        if (m_actors[i]->getStarted())
            m_actors[i]->debug();
    }
}

void Scene::end()
{
    for (int i = 0; i < m_actorCount; i++)
    {
        if (m_actors[i]->getStarted())
            m_actors[i]->end();
    }

    m_started = false;
}

