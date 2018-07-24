#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "core/Component/ComponentModel.h"
class ComponentView
{
private:
    Component* __component;

public:
    ComponentView(Component* component); //constructor
    ~ComponentView();//descructor
    void Render(sf::RenderTarget& target); //������ �� ������ ������ (__model)
    Component* Owner(); // ���������� ������
    void SetOwner(Component* component); // ���������� ������

};

