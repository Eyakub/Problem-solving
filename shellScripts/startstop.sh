$ cat startpcapp
#!/bin/bash

case "$1" in
'start')
echo "Starting application"
/usr/bin/startpc
;;
'stop')
echo "Stopping application"
/usr/bin/stoppc
;;
'restart')
echo "Usage: $0 [start|stop]"
;;
esac

