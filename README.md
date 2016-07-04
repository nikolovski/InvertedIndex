<h1>Inverted Index</h1>
<p>
Write a program that inputs a text file and outputs an inverted index of all the words in the file. <br><em>What is an inverted index?</em> For the purpose of this problem an inverted index is a mapping that, for each word in a file, lists the location of that word (its line and position in the line) in the file. For example if the word ‘excellent’ appears on line 7 at positions 4 and 23, and on line 55 at position 6, your program would output excellent 3 [ (7,4) , (7,23), (55,6) ] The first 3 indicated the number of times the word appears in the file and the list contains the pairs (line number, position). In the example above (7,23) means that the word “excellent” appears on line 7 at position 23 (where the position count on the line starts at zero).
</p>
<b>Input: </b>
Use the text of the Gettysburg Address located here:
http://venus.cs.qc.cuny.edu/~waxman/780/Gettysburg%20Address.txt
<br>
<b>Output: </b>
Each unique word appears only once in the output, no matter how many times it appears in the file.
List each word on a new line using the format above, viz. excellent 3 [ (7,4) , (7,23), (55,6) ].
<br>
<h3>Online Demo: </h3> http://goo.gl/5AA7UN
<p>Note: First click on <em><b>Compile</b></em> then <em><b>Execute</b></em>
