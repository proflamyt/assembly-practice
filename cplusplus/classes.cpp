

//main.h 

class Student
{
    public :
    int studentID;
    int grades[10];
    
    void setStudentID (int studentIDIn) 
    {
        studentID = studentIDIn;
    }
    
    void setGrade (int index, int grade)
    {
        grades[index] = grade;
    }
    
    void printGrades()
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << grades[i];
        }
    }
    int getMin() 
    {
        int min = grades[0];
        
        for (int i = 0; i < 10; i++)
        {
            if (grades[i] < min)
            {
                min = grades[i];
            }
        }
        
        return min;
        
    }
    
    int getMax() {
        
        int max = grades[0];
        for (int i = 0; i < 10; i++)
        {
            if (grades[i] > max)
            {
                max = grades[i];
            }
        }
        
        return max;
    }
    
    int getAverageGrade() {
        int sum = 0;
        
        for (int i=0; i< 10; i++)
        {
            sum += grades[i];
        }
        
        return sum/10.0 ;
    }
    
    
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    
    void addStudents(Student student[])
    {
        int d =0;
        
        for (int i = 0; i < 6; i++)
        {
            students[i] = student[i];
            for (int j = 0, p = d -1 ; j< 10, p < 10 + d ; j++, p++)
            {
                grades[p] = student[i].grades[j];
            }
            
            d = j;
        }
    }
    
    int* getAllGrades()
    {
        return grades;
    }
    
    int * sortAllGrades()
    {
        int temp;
        for (int i = 0; i< 60; i++)
        {
           if (grades[i] > grades[i+1])
           {
               temp = grades[i];
               grades[i] = grades[i+1];
               grades[i+1] = temp;
               
           }
        }
        
        return grades;
    }
    
 
};
