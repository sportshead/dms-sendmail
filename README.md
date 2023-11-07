# dms-sendmail

Simple C script to be placed in `/usr/sbin/sendmail` that calls [docker-mailserver](https://github.com/docker-mailserver/docker-mailserver)'s `sendmail` program with the programs stdin. Redirects stdout/stderr to `/var/log/sendmail`.

