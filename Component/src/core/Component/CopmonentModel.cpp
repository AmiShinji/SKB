#include<iostream>
#include "core/Component/ComponentModel.h"
#include <SFML/Graphics.hpp>
using namespace std;

ComponentModel::ComponentModel (string name,Component* component)
{
    setlocalCoord( 0,0);
    setSize( 200,100);
    setName(name);
    setAngle(0.0);
    setFlag(0);
     __component = component;
}

Component* ComponentModel:: Owner() // ���������� ������
{
    return __component;
}
void ComponentModel:: SetOwner(Component* component) // ���������� ������
{
    __component = component;
}
void ComponentModel::setlocalCoord (int X_coord, int Y_coord)
{
    localCoord.x=X_coord;
    localCoord.y=Y_coord;
}
void ComponentModel::setSize (int A_size, int B_size)
{
    size.x=A_size;
    size.y=B_size;
}
sf::Vector2f ComponentModel::Coord()
{
    return localCoord;
}
sf::Vector2f ComponentModel::Size()
{
   return size;
}
void ComponentModel::setName(string name2){
   Name=name2;
}
string ComponentModel::name(){
return Name;
}
void ComponentModel::setAngle(double angle2){
Angle=angle2;
}
double ComponentModel::angle(){
return Angle;
}
void ComponentModel::setFlag(sf::Uint16 flag2){
Flag=flag2;
}
sf::Uint16 ComponentModel::flag(){
return Flag;
}
void ComponentModel::setRenderStates(sf::RenderStates renderstates){
    __renderstates = renderstates;
}
sf::RenderStates ComponentModel::renderstates(){
return __renderstates;
}
