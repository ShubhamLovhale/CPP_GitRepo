using System;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Channels;


namespace C_Sharp_Programming
{
    internal class String_Operations_Functions_
    {
        public static void Mystringfunctions()
        {
            // string operations - type of operations we can do on string
            // 1. concat - to connect two diff strings

            string FirstString = "Aurangabad ";
            string SecondString = "Maharashtra";
            string SecondConvertedStr = SecondString.ToLower();

            string NewString = string.Concat(FirstString, SecondString);

            // 2. contains - used to determine whether substring exist in the given string

            bool result = FirstString.Contains("bad"); // Default value for boolean variable is false.
            bool isOccurance = SecondString.Contains("rash");

            bool isexist = SecondConvertedStr.Contains("maha");  // C# language is case sensitive

            string Input = Console.ReadLine();

            //string Input2Lower = Input.ToLower();

            isexist = Input.Contains("prath");

        }

    }
}
