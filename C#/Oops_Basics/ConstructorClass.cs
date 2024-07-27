using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Oops_Basics
{
    internal class ConstructorClass
    {
        string Name;
        int Age;
        bool IsMinor;

        // constructor:
        // Def:
        // 1. Constructore is the spectial function/method of the class having same name as the class.
        // 2. Constructor do not have return type
        // 3. Constructor is invoked automatically when object of the class id created
        // 4. Types Constructor : 
        // a. Default Constructor :
        //    Every class has the defualt constructor, even if we do not declare constructor explicitely.
        //    Default constructor do not have parameters
        //    Default constructor initialise not static fields to default values..
        //    Default constructor will only be created automatically, when there is no other constructor in the class.
        public ConstructorClass()
        {
        }

        // b. Parametric Constructor
        //    Parametric constructor needs to be declared explicitely
        //    It has the parameters.
        //    Used When we need Input from User while creating object
        //    Paramettric constructor initailises feilds to parameter values

        public ConstructorClass(string name, int age, bool IsMinor)
        {
            this.Name = name;
            this.Age = age;
            this.IsMinor = IsMinor;

        }


        // c. Private Constructor 
        // d. Static constructor
        // 

        // Structure for constructor:
        // AccessModifier Classname(Can have the parameters)
        //{
        //}

        public void PrintDetails()
        {
            Console.WriteLine($"Name : {Name}, \n Age : {Age}, \n isMinor : {IsMinor}");
        }

    }
}
