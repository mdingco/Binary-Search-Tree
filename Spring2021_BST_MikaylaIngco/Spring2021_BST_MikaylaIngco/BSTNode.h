// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#ifndef BSTNODE_H
#define BSTNODE_H

#include <iostream>

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
	Key k;                  // The node's key
	E it;                   // The node's value
	BSTNode* lc;            // Pointer to left child
	BSTNode* rc;            // Pointer to right child
	//CB below are added
	bool leftBF : 1;       // Left bitfield 
	bool rightBF : 1;      // Right bitfield 

	//For the bitfields, true = is thread, false = points to node

public:
	// Two constructors -- with and without initial values
	BSTNode() { lc = rc = NULL; }
	BSTNode(Key K, E e, BSTNode* l = NULL, BSTNode* r = NULL)
	{
		k = K; it = e; lc = l; rc = r;
	}
	~BSTNode() {}             // Destructor

	// Functions to set and return the value and key
	E& element() { return it; }
	void setElement(const E& e) { it = e; }
	Key& key() { return k; }
	void setKey(const Key& K) { k = K; }

	// Functions to set and return the children
	inline BSTNode* left() const { return lc; }
	void setLeft(BinNode<E>* b) { lc = (BSTNode*)b; }
	inline BSTNode* right() const { return rc; }
	void setRight(BinNode<E>* b) { rc = (BSTNode*)b; }

	//CB Edit down
	// Functions to set and return bitfields
	inline int leftBit() const { 
		return leftBF;
	}

	void setLeftBit(bool bit) {
		  leftBF = bit;
	}

  inline int rightBit() const { 
	  return rightBF; 
  }

  void setRightBit(bool bit) {
	  rightBF = bit;
  }

	//CB Edit up

	// Return true if it is a leaf, false otherwise
	bool isLeaf() { return (lc == NULL) && (rc == NULL); }
};

#endif