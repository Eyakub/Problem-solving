#!/bin/bash

echo "Is it morning? press yes or y for yes and no or n for no"
read n

case "$n" in
	y | yes | Yes | YES ) echo "Good morning" ;;
	no | n | NO | No ) echo "Good afternoon" ;;
	* ) echo "NO Result found"
	

esac

