cat /etc/passwd | sed -e "s/:.*//g" | grep -v "#" | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./g' | tr -d '\n'
