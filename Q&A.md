# Questions and Answers

<ol>
	<li>
		<h3>Describe any mistake(s) in the following code segment.</h3>
		<div>
			<kbd>const int SIZE = 5;<br>
			array&ltint, SIZE&gt items;<br>
			items = 5;</kbd>
		</div>
		<h4>Answer:</h4>
		<p>One cannot simply assign a literal to an array instance.</p>
		<p>Arrays have no viable overload for <kbd>=</kbd> assignments.</p>
		<p>One needs to assign an element to an array like so:</p>
		<p><kbd>items[0] = 5;</kbd></p>
	</li>
	<li>
		<h3>Describe any mistake(s) in the following code segment.</h3>
		<div>
			<kbd>const int SIZE = 5;<br>
			array&ltstring, SIZE&gt items = {};<br>
			items[SIZE] = "Book";</kbd>
		</div>
		<h4>Answer:</h4>
		<p>Because <kbd>SIZE</kbd> is 5, the indexes for the array go from 0 to 4.</p>
		<p>It is not possible to assign <kbd>"Book"</kbd> to an index of 5 for the array because it is not allocated/available.</p>
	</li>
	<li>
		<h3>Describe any mistake(s) in the following code segment.</h3>
		<div>
			<kbd>int SIZE = 10;<br>
			array&ltdouble, SIZE&gt items = {};<br>
			items = 10.5;</kbd>
		</div>
		<h4>Answer:</h4>
		<p>The array template must have a constant expression for its second argument.</p>
		<p>It is also not possible to assign an array with a literal.</p>
		<p>To assign the first element of the array, one would do this instead:</p> 			<p><kbd>items[0] = 10.5;</kbd></p>
	</li>
</ol>

