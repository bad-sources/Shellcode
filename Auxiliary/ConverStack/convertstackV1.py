import sys
import re
#Deprecated since version 2.6
#The commands module has been removed in Python 3. Use the subprocess module instead.
#I'm still using 2.x so fuck it lol.
try:
	from colorama import init,Fore
	init()
except:
	print "Please, install colorama module!"
	print "pip install colorama"

#Author : B3mB4m
#Greetz : Bomberman
#Shellcode Helper(x86 Litle Endian - 4Byte converter)

#Only works on path strings.
#This tool only made for shellcode coders.
#Also this is my own shellcode helper.
#I'll add functional features as quickly as possible
#I hope that can be help someone, so stay tuned ! :)  

class pusher(object):
	def __init__(self):
		self.generate = sys.argv[1]
		self.cout = 0
		self.fill = "/"
		self.newlist = [x for x in range(len(self.generate))]
		for i in xrange(0, len(self.generate)):
			self.newlist[i] = self.generate[i]
			self.cout += 1;
		self.calculator( self.generate)	

	def helper(self):#Most boring part shellcode
		#turning strings to stack but from now on its not !
		print """	
#Author : B3mB4m
#Greetz : Bomberman
#Shellcode Helper(x86 Litle Endian - 4Byte converter)
b3mb4m@root~/Desktop$ python shellcode.py /etc/passwd
push 0x64777373
push 0x61702f63
push 0x74652f2f	
		""";
		sys.exit()


	def calculator(self, hexme):
		if  len(hexme) % 4 == 1:
			self.fill = self.fill * 4
		elif len(hexme)	% 4 == 2:
			self.fill = self.fill * 3
		elif len(hexme) % 4 == 3:
			self.fill = self.fill * 2

		if self.cout == 4: 
			stack = "push 0x%s" % (hexme[::-1].encode('hex'))
			print(Fore.GREEN + stack)
			sys.exit()

		elif self.cout > 4:
			if len(hexme) % 4 == 1:
				self.hextime(self.fill, hexme)
				sys.exit()
			elif len(hexme) % 4 == 2:
				self.hextime(self.fill, hexme)
				sys.exit()
			elif len(hexme) % 4 == 3:
				self.hextime(self.fill, hexme)	
				sys.exit()	

	def hextime(self, putmein, hexme):
		for i in xrange(0, len(hexme)):
			if hexme[i] == "/":
				self.newlist[i] = putmein
				fixstring = self.complie( self.newlist)
				self.splitter(fixstring)
				break;	

	def complie(self, givemethatstring):
		compliestring = ""
		for i in givemethatstring:
			compliestring += i
		return compliestring			

	def splitter(self, hexdump):
		fixmesempai = re.findall('....?', hexdump)
		for x in fixmesempai[::-1]:
			stack =  "push 0x%s" % str(x[::-1].encode("hex"))
			print (Fore.GREEN + stack)

pusher()
