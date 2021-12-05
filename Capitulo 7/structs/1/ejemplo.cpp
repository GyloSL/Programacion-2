struct Employee
{
    short id;
    int age;
    double wage;
};

int main(){
    Employee joe{1, 32, 60000.0};
    Employee maria{2, 28};
    Employee grisel{};
    grisel.id = 3;
    grisel.age = 19;
    grisel.wage = 0.1;
}
