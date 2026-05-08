#include "Adress.h"
#include "Faculty.h"
#include "Student.h"
#include "Subject.h"
#include "Employee.h"
#include "University.h"
#include "Rectorate.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Adress a1("Ostrava", "17. listopadu", "2172/15", 70800);
    Adress a2("Ostrava", "LudvíkaPodéště", 70800);
    Adress a3("Ostrava", "17. listopadu", "2184/8", 70800);


    Faculty fei("FEI", a1);
    Faculty fast("FAST", a2);
    Faculty ekf("EKF", a3);
    Rectorate rectorate(a1);

    Student s1("Mike Love", "LOV1941");
    Student s2("Brian Wilson", "WIL1942");
    Student s3("Al Jardine", "JAR1942");
    Student s4("Bruce Johnston", "JOH1942");
    Student s5("Dennis Wilson", "WIL1944");
    Student s6("Carl Wilson", "WIL1946");
    
    Employee e1("Paul McCartney", "MCC942");
    Employee e2("George Harrison", "HAR943");
    Employee e3("John Lennon", "LEN940");
    Employee e4("Ringo Starr", "STA940");
    Employee e5("Mick Jagger", "JAG944");
    Employee e6("Frank Sinatra", "SIN915");

    Subject sub1("music", e1);
    Subject sub2("math", e2);
    Subject sub3("physics", e3);
    Subject sub4("chemistry", e4);
    Subject sub5("marketing", e5);

    fei.addEmployee(&e1);
    fei.addEmployee(&e2);
    fei.addStudent(&s1);
    fei.addStudent(&s2);
    s1.addSubject(sub1);
    s1.addSubject(sub2);
    s1.incGrade("math", 80);
    s1.incGrade("music", 30);
    s2.addSubject(sub1);
    s2.addSubject(sub2);
    s2.incGrade("math", 60);
    s2.incGrade("music", 70);

    fast.addEmployee(&e3);
    fast.addStudent(&s3);
    fast.addStudent(&s4);
    s3.addSubject(sub3);
    s3.addSubject(sub4);
    s3.incGrade("physics", 40);
    s3.incGrade("chemistry", 70);
    s4.addSubject(sub3);
    s4.addSubject(sub4);
    s4.incGrade("physics", 70);
    s4.incGrade("chemistry", 80);

    ekf.addEmployee(&e4);
    ekf.addStudent(&s5);
    ekf.addStudent(&s6);
    s5.addSubject(sub5);
    s5.incGrade("marketing", 60);
    s6.addSubject(sub5);
    s6.incGrade("marketing", 50);


    rectorate.addEmployee(&e6);

    University::setName("VŠB");
    University::addDivision(&rectorate);
    University::addDivision(&fei);
    University::addDivision(&fast);
    University::addDivision(&ekf);

    University::printInfo();

    return 0;
}