cmd_/home/samastua/Documents/TEC/Embebidos/Git/Taller-8/hello/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/samastua/Documents/TEC/Embebidos/Git/Taller-8/hello/"$$0) }' > /home/samastua/Documents/TEC/Embebidos/Git/Taller-8/hello/hello.mod