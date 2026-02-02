# Made by DroidApp software



import colorama
from colorama import Fore
import os

def clear():
   os.system("clear")

clear()

def banner():
    banner = """

        _____
       | •   |
   ____|     |      JUPYTER-CHARM 1.0
  |      ___ |____
  |     |         |
  |     |         |
  |_____|     |___     DROIDAPP
        |   • |           SOFTWARE
        |_____|          < >

    """

    print(Fore.GREEN + banner + Fore.RESET)


banner()

