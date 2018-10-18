IP=$(ifconfig | grep "broadcast " | cut -d ' ' -f2)
if [ IP == "" ]; then
	echo "I am lost!"
else
	echo "$IP"
fi
