#include <iostream>
#include <string>
#include "BST.h"

int main()
{
	cout << "Mikayla Ingco - Programming Assignment 2: Double Threaded Binary Tree" << endl;
	
	BST<int, string>* dictionary = new BST<int, string>();

	cout << "Testing the insert function to build the tree." << endl;

	dictionary->insert(77, "seventy-seven");
	dictionary->insert(70, "seventy");
	dictionary->insert(75, "seventy-five");
	dictionary->insert(66, "sixty-six");
	dictionary->insert(79, "seventy-nine");
	dictionary->insert(68, "sixty-eight");
	dictionary->insert(67, "sixty-seven");
	dictionary->insert(69, "sixty-nine");
	dictionary->insert(90, "ninety");
	dictionary->insert(85, "eighty-five");
	dictionary->insert(83, "eighty-three");
	dictionary->insert(87, "eighty-seven");
	dictionary->insert(65, "sixty-five");

	cout << "The size of the tree is " << dictionary->size() << endl << endl;

	cout << "My tree's structure is: " << endl << "<tests my changes to the print function> : " << endl;
	dictionary->print();
	cout << endl;

	cout << "Inorder printing of my tree" << endl << "<tests my right threads and printInorder function> : " << endl;
	dictionary->printInorder();
	cout << endl;

	cout << "Reverse order printing of my tree" << endl << "<tests my left threads and printReverse function> : " << endl;
	dictionary->printReverse();
	cout << endl;

	system("pause");
	return 0;
};