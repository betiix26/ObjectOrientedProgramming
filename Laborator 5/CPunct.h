#pragma once
class CPunct
{
protected:
	float x;
	float y;

public:
	CPunct();
	~CPunct();
	CPunct(float px, float py);
	float getArie() const;
	float getPerimetru() const;
};

