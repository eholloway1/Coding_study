# Coding_study
Materials from my efforts reading a coding along with Bjarne Stroustrup's Programming: Principles and Practice Using C++
I will quote the book directly for a description of the material categories:

Drills: A drill is a very simple exercise devised to develop practical, almost mechanical skills. A drill usually consists of a sequence of modifications of a single program. 
You should do every drill. A drill is not asking for deep understanding, cleverness, or initiative. We consider the drills part of the basic fabric of the book. 
If you haven’t done the drills, you have not “done” the book.

Exercises: Some exercises are trivial and others are very hard, but most are intended to leave some scope for initiative and imagination. If you are serious, you’ll do quite a few exercises.
At least do enough to know which are difficult for you. Then do a few more of those. That’s how you’ll learn the most. The exercises are meant to be manageable without exceptional cleverness, rather than to be tricky puzzles.
However, we hope that we have provided exercises that are hard enough to challenge anybody and enough exercises to exhaust even the best student’s available time. We do not expect you to do them all, but feel free to try.

Depends contains the Dependency for the materials within the Programming... book: std_lib_facilities.h. All files require this dependcy be #included to function.
Each catergory has it's own folder, each category folder contains a folder chapter. The chapter folder in the category contains the solution file for that chapter.
Each solution file contains a source file for each numbered task. The source files can be directly in the solution file's dependency folder (found in the same tier as the solution file, typically of the same name).
If accesing the source files ia the main solution, please keep in mind only one main() can be built at a time (at least in Visual Studio). You can alter the properties of the source files in the solution explorer
to include and exclude the source files for the build.
