// using statement is used to define namespace
// What is namespace in C# ?
// Why using statemnet is used in C# ?

using System;
using C_Sharp_Programming;


namespace C_Sharp_Basics // This is Project and assembly
{
    public class CustomClass
    {

    }

    internal class Program
    {
        static void Main(string[] args)
        {
            
            int result = C_Sharp_Programming.MyClass.ReturnSum(80,35);
            System.Console.WriteLine(result);
        }

       
    }

}
