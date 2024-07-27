using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Oops_Basics
{
    internal class Program
    {
        static void Main(string[] args)
        {

            ConstructorClass c = new ConstructorClass("Prathmesh", 23, false);
            c.PrintDetails();

            Console.WriteLine("\n\n\n");

            ConstructorClass d = new ConstructorClass();
            d.PrintDetails();



            Console.WriteLine("\n\n\n");

            c.PrintDetails();


            ConstructorClass e = new ConstructorClass();
            e.PrintDetails();

            // Object....
            // Object is the representative of the class
            // Object is created by calling contructor of the class with "new" keyword.
            // Object has properties(Data Members) and behaviours
            // Stucture of creating object
            // ClassName ObjectName = new Classname()

            //Student.Schoolname = "New English School";

            //Student S1; // (S1- Object) //Instance Object decalaration, Calling the Class Student 
            //    //Memory is allocated to the Static fields of the class as soon as the class is called
            //S1 = new Student();
            //// new keyword allocates space in the memory for non static members of the class.
            ///
            Program p = // Instance of the class, 
                new Program(); // Object of the class //  When we use new keyword with constructor the object is created and memory is allocated
                               // to non static members of the class. 

            //S1.RollNo = 1;
            //S1.Standard = 7;
            //S1.PrintStudentData();


            //Student S2 = 
            //    new Student();
            //S2.Standard = 8;
            //S2.RollNo = 2;
            //S2.PrintStudentData();

            //Student S3 = new Student();
            //S3.Standard = 8;
            //S3.RollNo = 3;
            //S3.PrintStudentData();

            
            //int age;
            //string Name;

            //Program p1 = new Program();

            //age = 10;
            //Name = "fejn";

            //Program p2 = new Program();

            //age = 20;
            //Name = "fdfbhfejn";

            //Program p3 = new Program();


            //age = 30;
            //Name = "cfenod";


            //Cars audi = new Cars();
            //audi.Wheels = 4;
            //audi.Color = "black";
            //audi.pritncardetails();
            

            //Cars BMW = new Cars();
            //BMW.pritncardetails();
            

            //for (int i = 0; i < 1000; i++) 
            //{                
            //    new Cars();
            //}


        }
    }

    public class Cars
    {
        public int Wheels = 8;
        public string Color;
        public void pritncardetails()
        {
            Console.WriteLine($"Wheels = {Wheels} \n cars = {Color}");
        }

    }
}
