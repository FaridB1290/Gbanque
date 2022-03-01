#pragma once
class mad
{
private:
	float solde;
public:
	mad(float solde);
	mad();
	bool operator>=(const mad& m) const;
	mad& operator-(const mad & m) const;
	mad& operator+(const mad& m) const;
	mad& operator*(const mad& m) const;
	~mad();
};

