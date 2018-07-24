#include <iostream>
#include <SFML/Graphics.hpp>
#include "core/core.h"
#include "core/Component/ComponentModel.h"
#include "core/Component/ComponentView.h"
#include "core/Component/ComponentController.h"
ComponentController::ComponentController(Component* component)
{
    __component = component;
}
ComponentController::~ComponentController()
{

}
Component* ComponentController:: Owner() // ���������� ������
{
    return __component;
}
void ComponentController:: SetOwner(Component* component) // ���������� ������
{
    __component = component;
}

bool ComponentController::Handle(sf::Event event)
{
    return false;

}
