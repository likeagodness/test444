#pragma once
#include <SFML/Graphics.hpp>

class flag  //����� �����, ������� ����������� �����
{
private:
	sf::Texture mTexture; //��� ��������

public:
	sf::Sprite mSprite; //��� ������
	char captureStatus; //���������� ����������, ���������� �� ��, �������� ��, ��� ���

	flag(); //���������� � ������������ ��� ����������
	~flag(); //���������� �����������
};