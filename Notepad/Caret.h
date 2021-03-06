//Caret.h
/**************************************************
Classification : (will classify by UML class stero type)
Function : Caret object of text editor.
MVC : ?
Author : Chan Hyung Kim
Written Date : 2019.05
Recently Updated : 2019.05
**************************************************/

#ifndef _CARET_H
#define _CARET_H

typedef signed long int Long;

class NotepadForm;

class Caret {
public:
	Caret(NotepadForm *notepadForm = 0);
	Caret(const Caret& source);
	~Caret();
	Caret& operator=(const Caret& source);

	void Create(Long width, Long height);
	void Move(Long x, Long y);
	void Show(bool isShow = true);

	Long GetX() const;
	Long GetY() const;
private:
	NotepadForm *notepadForm;
	Long x;
	Long y;
};

inline Long Caret::GetX() const {
	return this->x;
}

inline Long Caret::GetY() const {
	return this->y;
}

#endif //_CARET_H