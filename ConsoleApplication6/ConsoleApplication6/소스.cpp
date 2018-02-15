#include<iostream>
#include<string>

char *getangle(float hour, float minute);

int main() 
{
	std::cout << getangle(3.0, 0.0) << std::endl;
	std::cout << getangle(6.0, 0.0) << std::endl;
	std::cout << getangle(3.0, 1.0) << std::endl;

	return 0;
}
char *getangle(float hour, float minute) {
	float h_angle,m_angle;
	char *str

		h_angle = 30 * hour + minute / 2;
	m_angle = minute*6;
	if(h_angle>m_angle){
		
		return str;
	}
	else {
		return m_angle - h_angle;
	}

}