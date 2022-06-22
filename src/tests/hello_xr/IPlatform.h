#pragma once
class IPlatform
{
public:
	virtual int InitWindow() = 0;
	virtual bool Run() = 0;
	virtual ~IPlatform() {};
};

