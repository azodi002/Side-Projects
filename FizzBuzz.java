/*
Goal of Program: User enters a number, will print out all integers from 0 till user input, if number is divisible by 3, print "Fizz", if divisible by 5, print "Buzz", if divisible by 3 and 5, print "FizzBuzz"
What I Learned: Syntax of Java (Print to screen, user input, functions, String datatype)
*/

import java.util.Scanner;

public class fizzbuzz
{

    int main(String[] args)
    {
        int input;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Till what number do you want to go up to? \n");
        System.out.print("Answer: ");
        input=scanner.nextInt();
        String answer;
        for(int i=1; i<=input;++i)
            {
                answer=printAnswer(i);
                if(answer!="Fizz" || answer!="Buzz" || answer!= "FizzBuzz")
                    {
                        System.out.println(i);
                    }
                System.out.println(answer);
            }

        return 0;
    }

    String printAnswer(int counter)
    {
        String answer= null;

        if(counter%3==0 && counter%5==0)
            {
                answer="Fizz Buzz";
            }

        else if(counter%3==0)
            {

                answer="Fizz";
            }

        else if(counter%5==0)
            {

                answer="Buzz";
            }
        return answer;
    }
}