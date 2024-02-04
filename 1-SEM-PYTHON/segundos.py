segundos = int ( input ("Por favor, digite um número de segundos que deseja converter:"))
dias= segundos // 86400
segundos %= 86400
horas=segundos //3600
segundos %= 3600
minutos=segundos//60
segundos %= 60

print(dias,"dias", horas, "horas", minutos, "minutos", segundos, "segundos")
