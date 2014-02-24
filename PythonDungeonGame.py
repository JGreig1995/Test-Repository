#This game is programmed by Jarrett Greig.
#Please do not represent any of the code as your own work in any case.
#Enjoy!

#This is a game I developed quickly in Python within 24 hours of picking up the language earlier this month. 
#It functions as your typical text-based command-in-results-out game. 
#From design to implementation, this was a good exercise in decision making and I feel 
#like the idea of using functions as "rooms" is an easy way to tell the game which rooms are adjacent to each other.

leave_spawn = False
shovel_found = False
trash_searched = False
dirt_dug = False
moss_burned = False
stone_read = False
look_up = False
problem_solved = False
secret_switch = False
code_entered = False

def room_spawn():
	while True:
		global leave_spawn
	
		print "Welcome to the dungeon."
		print "There is a door to the south. Where will you go?"
		next = raw_input("> ")
		if "south" in next:
			leave_spawn = True
			print "The door locks behind you."
			room_one()
		else:
			print "I don't understand that yet."

def room_one():
	while True:
		global moss_burned
		global dirt_dug
		
		print "The mossy floor looks like it could be burned away."
		print "There is a door to the south and east."
		print "Where will you go?"
		next = raw_input("> ")
		if "south" in next and moss_burned:
			room_six()
		elif "south" in next:
			print "That door is locked."
		elif "burn" in next and dirt_dug:
			print "The moss burns away, revealing a button. You press it."
			moss_burned = True
		elif "east" in next:
			room_two()
		else:
			print "I don't understand that yet."

def room_two():
	while True:
		global stone_read
		
		print "The room appears to be empty."
		print "There is a door to the west and east."
		print "Where will you go?"
		next = raw_input("> ")
		if "east" in next:
			room_three()
		elif "up" in next and stone_read:
			print "On the ceiling is inscribed 'Second O'"
			look_up = True
		elif "west" in next:
			room_one()
		else:
			print "I don't understand that yet."
	
def room_three():
	while True:
		global shovel_found
		
		print "There is a pile of shovels in the corner of the room."
		print "There are doors leading west and east."
		print "You can grab a shovel. Where will you go?"
		next = raw_input("> ")
		if "west" in next:
			room_two()
		elif "grab" in next:
			shovel_found = True
			print "You take the shovel."
		elif "east" in next:
			room_four()
		else:
			print "I don't understand that yet."

def room_four():
	while True:
		global trash_searched
		
		print "In the corner sits a trash can. You can search it."
		print "There are doors leading west and east."
		print "Where will you go?"
		next = raw_input("> ")
		if "search" in next or "trash" in next:
			trash_searched = True
			print "You find a piece of paper with 'First R' written on it."
		elif "east" in next:
			room_five()
		elif "west" in next:
			room_three()
		else:
			print "I don't understand that yet."
	
def room_five():
	while True:
		global shovel_found
		global dirt_dug
		
		print "There is a soft patch of dirt in the middle of the room."
		print "There is a door to the west."
		print "Where will you go?"
		next = raw_input("> ")
		if "dig" in next and shovel_found:
			dirt_dug = True
			print "You find a tinderbox. You could easily start a fire now."
		elif "west" in next:
			room_four()
		else:
			print "I don't understand that yet."

def room_six():
	while True:
		global stone_read
	
		print "There is a stone tablet in the middle of the room."
		print "You can read it. There is a door to the north and east."
		print "Where will you go?"
		next = raw_input("> ")
		if "north" in next:
			room_one()
		elif "east" in next:
			room_seven()
		elif "read" in next:
			stone_read = True
			print "The stone reads; 'Go north east. Look up.'"
		else:
			print "I don't understand that yet."
	
def room_seven():
	while True:
		global problem_solved
		
		print "There is a complicated machine! Will you try to solve the problem?"
		print "There is a door to the west, north, and east."
		print "Where will you go?"
		next = raw_input("> ")
		if "west" in next:
			room_six()
		elif "north" in next:
			room_two()
		elif "east" in next:
			room_eight()
		elif "solve" in next:
			print ""
			print "The machine hums alive, and prompts: 'What is 2 + 3 - 1?'"
			next = raw_input("> ")
			if next == "4":
				print "The machine screeches 'Fourth C'"
				problem_solved = True
			else:
				print "The machine turns off because you are wrong."
				
		else:
			print "I don't understand that yet."
	
def room_eight():
	while True:
		global secret_switch
		global code_entered
		
		if code_entered:
			print "A door to the south appears!"
		if secret_switch:
			print "There is a place on the wall to enter a code!"
			print "Will you try to enter a code?"
			print "There is a door to the west and a door to the east."
			next = raw_input("> ")
			if "west" in next:
				room_seven()
			if "south" in next and code_entered:
				room_final()
			elif "east" in next:
				room_nine()
			elif "enter" in next or "code" in next:
				print "\nEnter a code."
				next = raw_input("> ")
				if next == "ROTC":
					code_entered = True
				else:
					print "That code is WRONG. Try again."
			else:
				print "I don't understand that yet."
		else:
			print "The room has a blank wall."
			print "There are doors to the west and east."
			print "Where will you go?"
			next = raw_input("> ")
			if "west" in next:
				room_seven()
			elif "east" in next:
				room_nine()
			else:
				print "I don't understand that yet."
		
def room_nine():
	while True:
		print "The room lets out a ghostly whisper. 'Third T'"
		print "There is a door to the west and a door to the east."
		print "Where will you go?"
		next = raw_input("> ")
		if "west" in next:
			room_eight()
		elif "east" in next:
			room_ten()
		else:
			print "I don't understand that yet."

def room_ten():
	while True:
		global secret_switch
		print "The room has a switch labelled 'SECRET' on the wall. Press it?"
		print "There is a door to the west."
		print "Where will you go?"
		next = raw_input("> ")
		if "secret" in next or "switch" in next or "press" in next:
			print "\nYou feel a rumble as walls in the dungeon move around."
			secret_switch = True
		elif "west" in next:
			room_nine()
		else:
			print "I don't understand that yet."
			

def room_final():
	while True:
		print "Congratulations! You've won!"
		exit(0)
		
#Let's get it started.		
room_spawn()
