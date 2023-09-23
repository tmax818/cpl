# 1.5 character input and output

>The model of input and output supported by the standard library is very simple. Text input or output, regardless of where it originates or where it goes, is dealt with as streams of characters.

> A *text stream* is a sequence fo characters divided into lines; each line consists of zero or more characters followed by a newline character `\n`. 

## 1.5.1 file copying

>The simplest example is a program that copies its input to its output one character at a time:

*read a character*
`while`(*character is not end-of-file indicator*)
    *output the character just read*
    *read a character*

[simpleio.c](simpleio.c)

## 1.5.2 character counting

[countchar.c](countchar.c)


