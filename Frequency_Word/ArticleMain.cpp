/**************************************************
Name: Omid Azodi
Date: 07/28/2018
Reference from website: https://javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
Coding Kata:
   Design an algorithm to find the frequency of occurrence of a word in an article?

Everything done in one file, but modularized.
*********************************************/


#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#define MAIN_SUCCESS 0
#define MAIN_FAILURE -1

class Article
{
public:
   // make sure object created with passed in filename
   Article() = delete;

   Article(std::string article_file_name);

   // no need to pas in article file
   // since caller forced to pass it in to create the object
   bool
   readArticleFile();

   int
   findNumberOfOccurrences(std::string word_to_search);

private:
   std::string m_article_file_name = "";
   std::vector<std::string> m_article_content;
};

Article::Article(std::string article_file_name)
   :m_article_file_name(article_file_name),
    m_article_content()
{
   // default forced ctor to be used
}

bool
Article::readArticleFile()
{
   bool read_article_file_successfully = true;
   std::ifstream article_input_stream(m_article_file_name);

   if (article_input_stream.bad())
   {
      read_article_file_successfully = false;
      std::cout << "Unable to read article with filename" << m_article_file_name << std::endl;
   }


   // at this point the article exists
   // and we should read in into the vector of strings
   std::string content = "";
   while (article_input_stream >> content)
   {
      m_article_content.push_back(content);
   }

   if (m_article_content.empty())
   {
      // ensure we don't have an empty content article
      read_article_file_successfully = false;
      std::cout << "Article filename: " << m_article_file_name << " had no content" << std::endl;
   }

   // at this point we have succesfully, cracked open 
   // the file and read in an article with actual content
   return read_article_file_successfully; // should be true at this point
}

int
Article::findNumberOfOccurrences(std::string word_to_search)
{
   int num_of_occurrences = 0;
   for (const auto& word : m_article_content)
   {
      if (word == word_to_search)
      {
         num_of_occurrences++;
      }
   }

   return num_of_occurrences;
}


// stand alone function
// 'free' function, doesn't belong to class
std::string 
promptFilename()
{
   std::string article_file_name = "";
   std::cout << " Enter article filename: ";
   std::cin  >> article_file_name;

   return article_file_name;
}

// stand alone function
// 'free' function, doesn't belong to class
std::string
promptWordToFind()
{
   std::string word_to_find = "";
   std::cout << " Enter word to find throughout article: ";
   std::cin >> word_to_find;

   return word_to_find;
}

// stand alone function
// 'free' function, doesn't belong to class
void
printNumberOfOcurrencesForWord(
   std::string word_searched, 
   int num_occurrences_of_word_in_article)
{
   std::cout << "Number of occurrences of word: " << word_searched << " is: " << num_occurrences_of_word_in_article << std::endl;
}

int main(int argc, char*argv[])
{

   std::string article_file_name = promptFilename();
   
   Article article(article_file_name);
   bool article_content_read_succesfully =
      article.readArticleFile();

   if (!article_content_read_succesfully)
   {
      std::cout << " Error reading file succesfully returning from main" << std::endl;
      system("pause"); // debugging purposes if not wanting to run exe from cmd line
      return MAIN_FAILURE;
   }

   std::string word_to_find = promptWordToFind();

   int num_occurrens_of_word_in_article =
      article.findNumberOfOccurrences(word_to_find);

   printNumberOfOcurrencesForWord(
      word_to_find,
      num_occurrens_of_word_in_article);

   system("pause"); // debugging purposes if not wanting to run exe from cmd line

   return MAIN_SUCCESS;
}




