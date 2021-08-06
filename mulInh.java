package lab6;

import java.util.Scanner;

interface exam {
    public void percent_call();
}
class student{
    String name;
    int roll;
    float mark1,mark2,mark3;
    student(String name,int roll,float mark1,float mark2,float mark3) {
        this.name=name;
        this.roll=roll;
        this.mark1=mark1;
        this.mark2=mark2;
        this.mark3=mark3;
    }
}
class result extends student implements exam {
    double avg, percent;
    result(String name,int roll,float m1,float m2,float m3) {
        super(name,roll,m1,m2,m3);
        this.name=name;
        this.mark1=m1;
        this.mark2=m2;
        this.mark3=m3;

    }
    public void percent_call() {
        avg=(mark1+mark2+mark3)/300;
        percent=avg*100;
        System.out.println("Percentage : "+percent+" %");
    }
}
class resultCalculation
{
    public static void main(String[] args) {
        String name;
        int roll;
        float mark1,mark2,mark3;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter student name : ");
        name= sc.next();
        System.out.print("Enter student roll no : ");
        roll=sc.nextInt();
        System.out.print("Enter marks of subject 1 : ");
        mark1=sc.nextFloat();
        System.out.print("Enter marks of subject 2 : ");
        mark2=sc.nextFloat();
        System.out.print("Enter marks of subject 3 : ");
        mark3=sc.nextFloat();
        result rs=new result(name,roll,mark1,mark2,mark3);
        rs.percent_call();
    }
}


public class mulInh {
}
