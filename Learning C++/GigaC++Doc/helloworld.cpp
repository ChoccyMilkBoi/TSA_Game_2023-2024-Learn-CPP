/* Foreword:
So Ik y'all don't know a lick of this so I tried to make it also explain the basics of computer science too.
Don't feel bad if you don't immediately get it, this stuff is like walking into a prison and trying to beat
up the biggest guy in there if this is ur first programming language. Also it is a good practice whenever typing
code in C++ to use what is called PascalCase or camelCase/lowerCamelCase when defining functions, these are typed as
with PascalCase, where each word starts with an uppercase letter with underscores in between; and with lowerCamelCase,
where the first word is all lower case and the rest start with upper and the rest of the letters per word are lowercase,
with underscores in between each word.
Examples:
Pascal_Case_Functions_Be_Like
lower_Camel_Case_Functions_Be_Like
*/
/* Foreword #2:
Btw if ur reading this on visual studio code (Which btw you friggin should) please download the following extensions
and also do the steps that I ask from y'all whilst y'all learn
Extensions used in this program:
  C/C++ extension pack by Microsoft:
    This pack has all of the necessary tools and extensions for coding in C++
  Code Runner:
    This extension lets you run the code within Vs Code and also go into settings and look up a video on how to
    get output into the terminal
  Better Comments:
    Get this so you can see all of the comments that I have left to be highlighted, this lets you make a comment
    red or yellow to make sure it is read or is more eye-catching.
  Better C++ Syntax:
    This makes the syntax in C++ better color coded and easier to determine what a part of a program does or is
  Themes for Better C++ Syntax:
    I used the noctis obscuro theme with this, just look at the better comments' descripition and see what other
    different themes are compatible and on there taht you like using
*/
/* Foreword #3
Ok, I know this is a bit excessive, but if y'all wanna see the coding stuff that I'm explaining in action,
! Look at the C++ learning miniprojects folder somewhere in the github to see the code working and in action
! in a smaller instance like a console app like a calculator and other stuff I've made in there
Please feel free to make your own miniprojects to learn and figure out on how to do and use all of this on a different
folder with ur name on it so y'all can show what you've learned
*/
/* Foreword #4
Damn it I need to put this in here to warn y'all that the various .json and .exe files are for vs code only
! In unreal, you only use the .cpp file/C++ files
*/
#include <iostream>
// For more information on how to use the various cmath math and arithmetic functions go to
// www.cplusplus.com/reference/cmath/
#include <bits/stdc++.h>
  // Namespaces allow for you to have multiple variables with the
  // same name, but with different values without overwriting them all
  // You prefix the namespace using variable with the name of the
  // namespace, and add two colons, i.e. std::cout;
  // The double colons are referred to as scope resolution operator.
  namespace juan{
    int x = 6;
  }
  namespace dos{
    int x = 7;
  }

  // Type defs allow for us to give certain data types nicknames for
  // better readability for example renaming a data type std::string 
  // to something more readable and concise like string_t, and by only
  // needing to add << "text" the type def functions as a std::string i.e.
  // typedef std::string text_t

  // Another way of putting these is by using the line "using" instead i.e
  // using text_t = std::string



int main(){
  //!========================================================================================
  using std::min;
  using std::max;
  // User input variable name parking lot
  std::string nerdname;
  std::string budder;


  // By adding the line [using namespace namespace;] will let us
  // use that namespace for all of the program, i.e. 
  // using namespace std;
  // cout << "Text"
  // using std::string, cout, data, etc.
  // Namespaces allow for us to avoid naming errors in code.


  //Messing with data values and stuff like variables and constants and math stuff

  // Ints are non decimal digits
  // Defined/Created as "int"
  int x = 6;
  //Writing the function name and then putting equals a compatible value changes the value of the variable.
  x=5;
  int y;
  y=6;

  // Doubles are numbers with decimals.
  // Defined/Created as "double"
  double gpa;
  gpa= 4.45;

  // A char is a single letter being stored.
  // If multiple UTF-8/ASCII characters are being stored in a char, it will overflow
  char gradecompsci = 'A';
  char grademath = 'A';

  // A boolean is a single true/false statement that will output true or false and can determine whether a function is carried out.
  // defined as "bool"
  bool w_rizz = true;
  bool l_rizz = false;

  // A string is defined by doing std::string string = "text";
  // Strings are meant to represent a sequence of text.
  std::string playaname = "NERD";

  // A CONSTANT is like a variable that will not be changed, even if it is altered later on in another const statement.
  // You start to define a constant by typing out "const" and then putting the data type afterwards, then defining it.
  const double pi = 3.1415962;
  int radius_1 = 10;
  int radius_2 = 15;
  int radius_3 = 20;

  double area_circle_1 = pi * radius_1 * radius_1;
  

  // Arithmetic operands work by doing any of the following + - * /
  int beans = 20;
  // If we wanted to add any given amount of beans to our amount 
  // we could run a command like beans = beans + x to redefine this variable.
  // Another thing we could run as a shorthand and more easily typable way is:
  beans+=2;
  // To add one to our given variable we'd just run varname++, or in
  // our case, beans++. This is called the increment operator
  beans++;
  // To subtract is similar to in addition:
  beans-=3;
  // And also the decrement operator, the inverse of the increment operator.
  beans--;
  // To multiply something we do similar to the last 2, and we run an operation
  // like varname*=x or varname = varname * x
  beans*=2;
  // To divide is the same as the rest, but now we use a forward slash, or /.
  // We can do similarly as in multiplying, doing:
  // varname/=x or varname = varname / x
  beans/=2;
  // If we use a number that isn't divisible by another number in an int data type,
  // we get a whole number, and therefore we'd have to make the data type a double.
  // If we want to get a remainder from an operation we'd use the modulus operator.
  int beansxtra3 = beans % 3;

  // Now to test out how the language handles pemdas, etc.
  // C++ handles math as such:
  // 1. Parentheticals
  // 2. Multiplication & Division
  // 3. Addition and Subtraction 
  int beanmath = 6 - 5 + 12 / 2;
  // Beanmath prediction for output: 7

  // Type conversion is the conversion of a value of one data type to another .
  // Implicit is type conversion that is done automatically.
  // Explicit is type conversion that is done by preceding the value whith the new data type.

  // int z = 4.20;
  // ^^^^^^^^^^^^^
  // If I were to output this line as is, it would simply output as 4.
  // double z = 4.20;
  // ^^^^^^^^^^^^^^^^
  // This will output as 4.20 as it is a double.
  double fotwenny = (int) 4.20;
  // This data will be shown as 4, this is explicit type conversion.

  // Implicit type conversion is done automatically like using ASCII characters/numbers onn a char
  char Dez = 100;
  // We can also accomplish this via explicit conversion by writing a line of code like this:
  // std::cout << (char) 100;

  // Here is an example of doing this with a test score calculator:
  int correctquestions = 8;
  int questionstest = 10;
  double testscore = correctquestions/(double)questionstest * 100;
  //                                 ^^^^^^^^^
  // Converting the type of the equation being run makes it so that we can display the decimal .8
  // from the equation, and doing so lets us finish the equation, as a decimal less than 1 would 
  // be forced to equal 0, and thats why leaving it as an int would make it equal to 0 as
  // 0 * 100 is still equal 0.

  // INPUT TIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIME

  // If cout is an output operator: Character OUTPUT
  // then cin is an input operator: Character INPUT
  // cout << Insertion operator
  // cin >> Extraction operator

  // We'd run the command below to take input from a user
  // std::cin >> inputvarname;
  // We'd then output it as :
  // std::cout << "Text" << inputvarname << '\n';
  // NOTE BEFOREHAND YOU HAVE TO ASSIGN THE VARIABLE A NAME AND DATA TYPE!!!
  // After having the user define the varibale you can use it for whatever
  // purposes you want to use it for, i.e. user defining a number, operation, and
  // second number to create something like a calculator later on.

  // In order to get a string of user character/string input we can use a funciton like:
  // std::getline(std::cin, varname);
  // If there is any other sort of data input before the getline command then run this instead:
  // std::getline(std::cin >> std::ws, varname)
  // We have to insert this extra bit of code due to the fact that theres a hidden/implied
  // '\n' operator that will cause the input to not work as it accepts the \n function,
  // that was not within the buffer/was implied. The ws operator will eliminate any \n operators
  // that were placed before the user input line.

  // ARE YOU REAAAAADY TO ROOOOOOOOOOOOCK MORE MATH TIME!!!!!!!!!!!
  double a = 7;
  double b = 8;
  double c = 9; 
  double d = -16;
  double e = 3.14;


  //! MAKE SURE TO MAKE MIN/MAX STATEMENTS USING ONLY 2 NUMBERS
  //! NOT DOING THIS WILL CAUSE AN ERROR IN THE COMPILER
  //! MAKE SURE TO USE TYPEDEF TO MAKE SURE THAT BOTH DATA VALUES
  //! ARE OF THE SAME TYPE OR ELSE THE COMPILER WILL HAVE AN ERROR.
  // This function allows for you to find the greatest number out of a series of 
  // various variables & numbers.
  double guh1 = max(1.1, 2.2);
  // The min function does a similar job, finding the lowest number in a series.
  double guh2 = min(1.1, 2.2);
  // The rest of these functions for math are underneath the cmath library,
  // This means that we have to add <cmath> as a header file.
  double aPOWb;
  aPOWb = pow(a, b);
  // This function has the first number within the parenthesis to be raised to the power of the second
  //integer/double that is within the parentheticals.
  
  // To do square roots of numbers, we do the following code:
  double sqrtC = sqrt(c);

  // To get an absolute value of a number we do
  double absD = abs(d);

  // To round numbers we do the following:
  // To round in the correct direction:
  double roond = (e);
  // To round up:
  double ceilE = ceil(e);
  // To round down:
  double floorE = floor(e);

  // AREEEEEEEEEEEEEEE YOUUUUUUUU REAAAAADY TO RUUUUUUUUUUUUUUUUUUUUMBLE
  // CONTROL STATEMENT TIME
  //! Quick overview on control statements.
  // If statements: If condtion, then run code
  // If/Else statements: If condition, run code, if other condition, then run other code
  // While loops: run a loop while a given statement is true
  // For loops: run a loop for a set number of times.
  /*
  if(condition){
    code
  }
  */


  int age_of_person;
  bool adult_check;
  /*
    void check_nerd_age() {
      if(age_of_person >= 18){
        std::cout << "Good Job you're an adult!" << '\n';
      }
      else if(age_of_person < 0){
        std::cout << "Homeslice hasn't been born yet!" << '\n'; 
      }
      else if(age_of_person < 18){
        std::cout << "What are you doing in here kid!!?!??!?!??" << '\n';
      }
    }
  */
  
  // A switch is an alternative to using many else/if statements.
  // Writing a switch is done as such:
  //! Omit the parenthesis placed in the case things
  /*
  switch(condition){
    case (User input/var1):
      case1code;
      break;
    case (User input/var2):
      case2code;
      break;
    ...
  ! We can set a default line to bem run in our code, with the user input,
  ! or given variable not being a case that was not coded in or prepared for,
  ! or not an intended input.
    default:
      defaultcasecode
  ! There is no need for a break line when you are at the last line of a switch.
  }
  */
  
  // A ternary operator is an alternative to using an if/else statement, it is type out like:
  // condition ? expression1 : expression2
  // Example-
  // double grade = x;    <--- Idk prob user input or smth like that for the example
  // grade >= 70 ? std::cout << "You passed! :D " : std::cout << "You failed! >:( )";

  // Logical Operartor Time
  // && - And - checks if 2 conditions are true.
  // || - Or - checks if at least one of the two conditions are true.
  // (!) (Ignore the parenthesis, its just the exclamation) Not - Reverses the logical state of its operand.
  //! Example
  /*
  std::cout << "Input temp here (Celsius)";
  int temp;
  std::cin >> temp;
  if(temp > 0 && temp < 30){
    std::cout << "It's aight";
  }
  else{
    std::cout << "It's not aight";
  }
  ! This code runs the top code if both statements are true, and the other if only one or none are true.
  ! This is due to this code running on an and logical operator.
  */
  /*
  std::cout << "Input temp here (Celsius)";
  int temp;
  std::cin >> temp;
  if(temp > 0 || temp < 30){
    std::cout << "It's aight";
  }
  else{
    std::cout << "It's not aight";
  }
  ! This code will output the top line if only one statement is true and not the other,
  ! and the bottom for the both or none being true.
  ! This is due to this running on an OR logical operator.
  */

  // Helpful code lines for strings and stuff.
  // if(line.length() [<,>,=] num){
  // some code
  // }
  // This lets you count the length of a string in characters.
  //! Remember that we start counting characters as such =
  //! Hello nerds
  //! 012345678910, so on so forth
  //! Just remember that we start counting characters from 0.

  // if(line.empty()){
  // some code
  //}
  // This checks if the value of a string is empty or not

  // string.clear
  // This clears the value of a string

  // string.append("text")
  // This lets us append extra text to the end of a string.

  // string.at(charnumber in string)
  // This function allows us to output char number x in a string.

  // string.insert(charnumber,text to insert)
  // Characters to be inserted are inserted before the character named.

  // string.find('char') 
  // This allows us to find a character's index (place) in a string

  // string.erase(beginning index, ending index);
  // This lets us erase all characters in a string between the two given indexes.

  /*
  ! Using X as a placeholder for an int in this example
  While loops is like an if statement, but it repeats code until the condition in the loop
  is no longer true.
  Example:
  while(x > 1){
    std::cout << x << '\n';
    x--
  }
  */
  // A do while loop is a while loop that will have the user redo the code segment 
  // and check the condition once it is done.
  // This is especially useful if you want a user to input a valid or useable variable for your function.
  /*
  do{
    std::cout << "Enter a number greater than 0: ";
    std::cin << x
  }while(x>1);
  
  */
  
  // For loop time
  // A for loop runs the code contained within it.
  /*
  for(int i = 1; i <= number of reps; i++){
    some code
  }
  */
  // A way we can do something is that we can output the int "i" in the code.
  /*
  for(int i = 1; i <= number of reps; i++){
    std::cout << i << '\n';
  }
  */
  // This code will output numbers counting upward to the number of reps.
  // Changing the characters after i can change by what or how the loop will count to the intended number.
  // i-- is a decrement operator, and it will count down, so set the value to less than the starting.
  // i-=x will have it count down by x
  // i+=x will have it count up by x
  
  // The break and continue functions allow us to manipulate loops
  // Break lets us break out of a loop prematurely
  // Continue lets us skip the current step in a loop

  // Whenever we make nested for loops we should use j for the second layer of nesting instead of i
  // This is done to avoid naming and counting errors in our code.

  // Generating random numbers in this only produces PSEUDO random numbers, still useful for general use.
  // Typically we should use the current time as a seed for our randomness.
  /*
  The standard notation for a time seeded random number is:
  srand(time(NULL))
  From here to call this function to define a variable we'd run code like this
  int rand_num = rand();
  To get our randomized number to be less than a certain number,
  we'd run the modulus operator (%) on the rand function and add 1 like this:
  int rand_D6 = (rand() % 6) + 1
  */

  // Now for random events
  // For random events we use the RNG function:
  /*
  rand_num = srand(time(NULL))
  int rand_num = (rand() % 6) + 1
  */
  // After this, we'd create a switch with all the differing instances of the code and for
  // Each of the differetn possible random numbers.
  /*
  switch(rand_num){
    case 1:
      some code
    break;
    case 2:
      some more code
    break;
    case 3:
      some more more code
    break;
    case 4:
      some more more more code
    break;
    case 5:
      some more more more more code
    break;
    case 6:
      some more more more more more code
    break;
  }

  */

  // Now for functions
  // We define normal functions by writing something like:
  /* void Function_Name(){
    some code
  }
  */
  //! Please do note that it is common and good practice to define functions after the main function.
  //! Also note that you ALWAYS defing functions outside of your main function.
  // Now, to add information from within the main function, you'd define a function like:
  /*
  void Function_Name(Datatype Var_Name, OtherDataType Other_Var_Name){
    some code that uses the defined vars
  }
  */
  //! Look in my C++ learning miniprojects to see this in action
  /* 
  ! From now on I will put various lessons in their own folders and programs as it get harder,
  ! and harder to explain what they do in just the comments of a single program that y'all won't read lol.
  */
  //* Returning keywords in a program is as simple as defining various strings and reusing them later on
  //* in a function and then in a program ot define other strings or to create outputs
  //* Concatenation is adding multpiple variables or data types in together in a string, like strings to strings,
  //* or like with strings with ints.
  /*
  *    String ConcatStrings(string First_Name, string Last_Name);
  ?    This line declares our function to concatenate strings together
  *    string ConcatStrings(string First_Name, string Last_Name){
  *    return First_Name + " " + Last_Name;
  ?    This line defines the function and has it concatenate both strings with a space between them.
  */

  // printing outputs and lists, testing functions, variables, and intellisense.
  // Use two consecutive < characters to separate what data types are being used in an output.
  // Use two consecutive > characters to explain that you are doing a user input on that line.
  std::cout << "These are lines or standard character outputs using text I put there." << '\n'; 
  std::cout << "I like cfa" << '\n';
  std::cout << "Its really good" << '\n';
  std::cout << "These are integers created from ones prior using operations."<< '\n';
  std::cout << x << " times " << y << " equals " << x * y << '\n';
  std::cout << "My goal grade point average is " << gpa << "." << '\n';
  std::cout << "The variable to be outputted here is a char with multiple letters/characters and therefore will overflow to the last one available." << '\n';
  std::cout << "To have a good gpa, my compsci grade will have to be: "<< gradecompsci << " and a: " << grademath << " in math" << '\n';
  std::cout << "Computer, does Eli have rizz, 1 for yes, zero for no: " << w_rizz << '\n';
  std::cout << "Computer, does Zane have rizz, 1 for yes, zero for no: " << l_rizz << '\n';
  std::cout << "Thank you computer!" << '\n';
  std::cout << "Oh what's ur name? " << playaname << " TOO LATE, WHAT A NERD!" << '\n';
  std::cout << "The area of a circle with a radius of " << radius_1 << " is " << area_circle_1 << '\n'; 
  std::cout << "This is the noraml x value, as defined in the main function, which will be 5: " << x << '\n';
  std::cout << "This is with namespace juan, which will be 6: " << juan::x << '\n';
  std::cout << "This is with namespace dos, which will be 7: " << dos::x << '\n';
  std::cout << "This is our bean count after running whatever operations we choose to run: " << beans << '\n';
  std::cout << "This is the remainder of the bean count after the operations being run, and having a modulus operator of 3 being run on it " << beansxtra3 << '\n';
  std::cout << "I predict that beanmath will output as 7: " << beanmath << '\n' << "Success!" << '\n';
  std::cout << "Char Dez is a character equal to 100, and as a character it will output the coorresponding ASCII character, being a lowercase d: " << Dez << '\n';
  std::cout << "This displays the operation of what grade you'd get for 8/10: " << correctquestions << " / " << questionstest << " = " << testscore << '\n';
  std::cout << "Getting the input from character input now." << '\n';
  std::cout << "Whats ur name?";
  std::cin >> nerdname;
  std::cout << "Hi " << nerdname << "!" << '\n';
  std::cout << "Please input a sentence to show how to take in sentences as a form of user input: " << '\n';
  std::getline(std::cin >> std::ws, budder);
  std::cout << budder << ", nice" << '\n';
  std::cout << "Now testing if statements and switches." << '\n' << "Now please give your age: ";
  std::cin >> age_of_person;
  if(age_of_person < 18){
    std::cout << "Being a minor is crazy" << '\n';
    bool adult_check = true;
  }
  else if(age_of_person >= 18){
    std::cout << "You liar you aint old enough to get laid or get paid!" << '\n';
    bool adult_check = false;
  }
  std::string adult_check_str;
  if (adult_check = true){
    adult_check_str = "false, thank you for telling the truth";
  }
  else if(adult_check = false){
    adult_check_str = "false, YOU LIAR";
  }
  std::cout << "Now time for an adult check: " << adult_check_str << '\n';
  char hungychar;
  std::cout << "Alright now for a switch, are you hungry Y/N: ";
  std::cin >> hungychar;

  switch (hungychar){
    case 'y':
      std::cout << "Ok cool you are hungry, go eat.";
    break;
    case 'Y':
      std::cout << "Ok cool you are hungry, go eat.";
    break;
    case 'n':
      std::cout << "Ok, don't eat more fatty lookin ahh";
    break;
    case 'N':
      std::cout << "Ok, don't eat more fatty lookin ahh";
    break;
    default:
      std::cout << "Please run this program again and put y/n as an input." << '\n';
    break;
  }
  


return 0;
}