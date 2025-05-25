// 1. Basic Multiple Inheritance
// Create two classes MathsTeacher and PhysicsTeacher, both with a method teach(). Inherit both into a ScienceTeacher class and override teach().

// 🔧 Goal: Understand simple multiple inheritance and function overriding.



#include <iostream>

using namespace std;


class MathsTeacher{

string name;
string subjectName;
public:
	MathsTeacher(string name, string subjectName) : name(name), subjectName(subjectName) {}
	virtual void teach() {
	std::cout<<"i teach "<<subjectName<<" Subject"<<endl;
	}
};


class PhysicsTeacher {
string name;
string subjectName;
public:
	PhysicsTeacher(string name, string subjectName) : name(name), subjectName(subjectName) {}
	virtual void teach() {
	std::cout<<"i teach "<< subjectName << " Subject"<<endl;
}


};


class ScienceTeacher : public MathsTeacher , public PhysicsTeacher {
string name;
string subjectName = "Science";
public:
	ScienceTeacher(string name, string pName, string pSubject, string mName, string mSubject) : name(name), MathsTeacher(mName, mSubject),
													PhysicsTeacher(pName, pSubject) {}
	void teach() override  {
	std::cout<<"i teach " << subjectName << " subject" <<endl;
	}

};

int main() {
ScienceTeacher st("usha Rani", "Gowthami", "Physics" , "Kotaiah" , "Maths");
st.teach();
// st.PhysicsTeacher::teach();
// st.MathsTeacher::teach();


// MathsTeacher mt = st;
// mt.teach();

// PhysicsTeacher pt = st;
// pt.teach();

// static_cast<MathsTeacher>(st).teach();

return 0;
}