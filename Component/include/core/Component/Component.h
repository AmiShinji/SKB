#pragma once
#include <iostream>
#include "core/core.h"
#include <SFML/Graphics.hpp>
#include "core/Component/ComponentModel.h"
#include "core/Component/ComponentView.h"
#include "core/Component/ComponentController.h"
using namespace std;


class Component
{
public:
    Component(string name);
    ~Component();

    ComponentModel* Model(); // ���������� ������
    void SetModel(ComponentModel* model); // ���������� ������

    ComponentView* View(); // ���������� �������������
    void SetView(ComponentView* view); // ���������� �������������

    ComponentController* Controller(); // ���������� ����������
    void SetController(ComponentController* controller); // ���������� ����������
private:
    ComponentModel* __model;
    ComponentController* __controller;
    ComponentView* __view;
};
