#pragma once

class Parent
{
public:
	void PrintClass();
};
class Child : public Parent
{
public:
	void PrintClass();
};
class VParent
{
public:
	virtual void PrintClass();
};
class VChild : public VParent
{
public:
	virtual void PrintClass();
};