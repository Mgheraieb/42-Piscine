ifconfig -a | grep ether | sed -e "s/ether//g" | cut -d' ' -f2
