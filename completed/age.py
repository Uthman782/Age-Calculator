# there are 28 month Functions which are
#  differe from each other. other wise all are same..
from months import *
# this function will check that the user entered date are correct or not..................../
def checking_day (year, month, day):
	if day > 31:
		print(f"Sorry your are wrong date is never {day} I never saw.")
	elif (year % 4 == 0) and (month == 2 and day > 29):
		print(f"Your are wrong on {year} in {month} Month date is never greater then 29.")
	elif (not(year % 4 == 0) and month == 2 and day > 28):
		print(f"Your are wrong on {year} in Month. Date is never greater than 28.")
	elif ((month == 4 or month == 6 or month == 9 or month == 11) and (day > 30)):
		print(f"Your are wrong in {month} month. Date is never greater than 30.")
		
def dayOfAge(year, month, days):
	i = 0
	while i <= 2100:
	# for (int i = 0 i <= 2100 i++)
		if year == i: # This is 2016 Year...............................
			if month == 1:
				fri_mon_31(days)
			
			elif month == 2:
				mon_tus_29(days)
			
			elif month == 3:
				tus_fri_31(days)
			
			elif month == 4:
				fri_sun_30(days)
			
			elif month == 5:
				sun_wed_31(days)
			
			elif month == 6:
				wed_fri_30(days)
			
			elif month == 7:
				fri_mon_31(days)
			
			elif month == 8:
				mon_thu_31(days)
			
			elif month == 9:
				thu_sat_30(days)
			
			elif month == 10:
				sat_tus_31(days)
			
			elif month == 11:
				tus_thu_30(days)
			
			elif month == 12:
				thu_sun_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2017 Year...............................
		
			if month == 1:
				sun_wed_31(days)
			
			elif month == 2:
				wed_wed_28(days)
			
			elif month == 3:
				wed_sat_31(days)
			
			elif month == 4:
				sat_mon_30(days)
			
			elif month == 5:
				mon_thu_31(days)
			
			elif month == 6:
				thu_sat_30(days)
			
			elif month == 7:
				sat_tus_31(days)
			
			elif month == 8:
				tus_fri_31(days)
			
			elif month == 9:
				fri_sun_30(days)
			
			elif month == 10:
				sun_wed_31(days)
			
			elif month == 11:
				wed_fri_30(days)
			
			elif month == 12:
				fri_mon_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2018 Year...............................
		
			if month == 1:
				mon_thu_31(days)
			
			elif month == 2:
				thu_thu_28(days)
			
			elif month == 3:
				thu_sun_31(days)
			
			elif month == 4:
				sun_tus_30(days)
			
			elif month == 5:
				tus_fri_31(days)
			
			elif month == 6:
				fri_sun_30(days)
			
			elif month == 7:
				sun_wed_31(days)
			
			elif month == 8:
				wed_sat_31(days)
			
			elif month == 9:
				sat_mon_30(days)
			
			elif month == 10:
				mon_thu_31(days)
			
			elif month == 11:
				thu_sat_30(days)
			
			elif month == 12:
				sat_tus_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2019 Year...............................
		
			if month == 1:
				tus_fri_31(days)
			
			elif month == 2:
				fri_fri_28(days)
			
			elif month == 3:
				fri_mon_31(days)
			
			elif month == 4:
				mon_wed_30(days)
			
			elif month == 5:
				wed_sat_31(days)
			
			elif month == 6:
				sat_mon_30(days)
			
			elif month == 7:
				mon_thu_31(days)
			
			elif month == 8:
				thu_sun_31(days)
			
			elif month == 9:
				sun_tus_30(days)
			
			elif month == 10:
				tus_fri_31(days)
			
			elif month == 11:
				fri_sun_30(days)
			
			elif month == 12:
				sun_wed_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2020 Year...............................
		
			if month == 1:
				wed_sat_31(days)
			
			elif month == 2:
				sat_sun_29(days)
			
			elif month == 3:
				sun_wed_31(days)
			
			elif month == 4:
				wed_fri_30(days)
			
			elif month == 5:
				fri_mon_31(days)
			
			elif month == 6:
				mon_wed_30(days)
			
			elif month == 7:
				wed_sat_31(days)
			
			elif month == 8:
				sat_tus_31(days)
			
			elif month == 9:
				tus_thu_30(days)
			
			elif month == 10:
				thu_sun_31(days)
			
			elif month == 11:
				sun_tus_30(days)
			
			elif month == 12:
				tus_fri_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2021 Year...............................
		
			if month == 1:
				fri_mon_31(days)
			
			elif month == 2:
				mon_mon_28(days)
			
			elif month == 3:
				mon_thu_31(days)
			
			elif month == 4:
				thu_sat_30(days)
			
			elif month == 5:
				sat_tus_31(days)
			
			elif month == 6:
				tus_thu_30(days)
			
			elif month == 7:
				thu_sun_31(days)
			
			elif month == 8:
				sun_wed_31(days)
			
			elif month == 9:
				wed_fri_30(days)
			
			elif month == 10:
				fri_mon_31(days)
			
			elif month == 11:
				mon_wed_30(days)
			
			elif month == 12:
				wed_sat_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2022 Year...............................
		
			if month == 1:
				sat_tus_31(days)
			
			elif month == 2:
				tus_tus_28(days)
			
			elif month == 3:
				tus_fri_31(days)
			
			elif month == 4:
				fri_sun_30(days)
			
			elif month == 5:
				sun_wed_31(days)
			
			elif month == 6:
				wed_fri_30(days)
			
			elif month == 7:
				fri_mon_31(days)
			
			elif month == 8:
				mon_thu_31(days)
			
			elif month == 9:
				thu_sat_30(days)
			
			elif month == 10:
				sat_tus_31(days)
			
			elif month == 11:
				tus_thu_30(days)
			
			elif month == 12:
				thu_sun_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2023 Year...............................
		
			if month == 1:
				sun_wed_31(days)
			
			elif month == 2:
				wed_wed_28(days)
			
			elif month == 3:
				wed_sat_31(days)
			
			elif month == 4:
				sat_mon_30(days)
			
			elif month == 5:
				mon_thu_31(days)
			
			elif month == 6:
				thu_sat_30(days)
			
			elif month == 7:
				sat_tus_31(days)
			
			elif month == 8:
				tus_fri_31(days)
			
			elif month == 9:
				fri_sun_30(days)
			
			elif month == 10:
				sun_wed_31(days)
			
			elif month == 11:
				wed_fri_30(days)
			
			elif month == 12:
				fri_mon_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2024 Year...............................
		
			if month == 1:
				mon_thu_31(days)
			
			elif month == 2:
				thu_fri_29(days)
			
			elif month == 3:
				fri_mon_31(days)
			
			elif month == 4:
				mon_wed_30(days)
			
			elif month == 5:
				wed_sat_31(days)
			
			elif month == 6:
				sat_mon_30(days)
			
			elif month == 7:
				mon_thu_31(days)
			
			elif month == 8:
				thu_sun_31(days)
			
			elif month == 9:
				sun_tus_30(days)
			
			elif month == 10:
				tus_fri_31(days)
			
			elif month == 11:
				fri_sun_30(days)
			
			elif month == 12:
				sun_wed_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2025 Year...............................
		
			if month == 1:
				wed_sat_31(days)
			
			elif month == 2:
				sat_sat_28(days)
			
			elif month == 3:
				sat_tus_31(days)
			
			elif month == 4:
				tus_thu_30(days)
			
			elif month == 5:
				thu_sun_31(days)
			
			elif month == 6:
				sun_tus_30(days)
			
			elif month == 7:
				tus_fri_31(days)
			
			elif month == 8:
				fri_mon_31(days)
			
			elif month == 9:
				mon_wed_30(days)
			
			elif month == 10:
				wed_sat_31(days)
			
			elif month == 11:
				sat_mon_30(days)
			
			elif month == 12:
				mon_thu_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2026 Year...............................
			if month == 1:
				thu_sun_31(days)
			
			elif month == 2:
				sun_sun_28(days)
			
			elif month == 3:
				sun_wed_31(days)
			
			elif month == 4:
				wed_fri_30(days)
			
			elif month == 5:
				fri_mon_31(days)
			
			elif month == 6:
				mon_wed_30(days)
			
			elif month == 7:
				wed_sat_31(days)
			
			elif month == 8:
				sat_tus_31(days)
			
			elif month == 9:
				tus_thu_30(days)
			
			elif month == 10:
				thu_sun_31(days)
			
			elif month == 11:
				sun_tus_30(days)
			
			elif month == 12:
				tus_fri_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2027 Year...............................
			if month == 1:
				fri_mon_31(days)
			
			elif month == 2:
				mon_mon_28(days)
			
			elif month == 3:
				mon_thu_31(days)
			
			elif month == 4:
				thu_sat_30(days)
			
			elif month == 5:
				sat_tus_31(days)
			
			elif month == 6:
				tus_thu_30(days)
			
			elif month == 7:
				thu_sun_31(days)
			
			elif month == 8:
				sun_wed_31(days)
			
			elif month == 9:
				wed_fri_30(days)
			
			elif month == 10:
			
				fri_mon_31(days)
			
			elif month == 11:
				mon_wed_30(days)
			
			elif month == 12:
				wed_sat_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2000 Year...............................
		
			if month == 1:
				sat_tus_31(days)
			
			elif month == 2:
				tus_wed_29(days)
			
			elif month == 3:
				wed_sat_31(days)
			
			elif month == 4:
				sat_mon_30(days)
			
			elif month == 5:
				mon_thu_31(days)
			
			elif month == 6:
				thu_sat_30(days)
			
			elif month == 7:
				sat_tus_31(days)
			
			elif month == 8:
				tus_fri_31(days)
			
			elif month == 9:
				fri_sun_30(days)
			
			elif month == 10:
				sun_wed_31(days)
			
			elif month == 11:
				wed_fri_30(days)
			
			elif month == 12:
				fri_mon_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2001 Year...............................
		
			if month == 1:
				mon_thu_31(days)
			
			elif month == 2:
				thu_thu_28(days)
			
			elif month == 3:
				thu_sun_31(days)
			
			elif month == 4:
				sun_tus_30(days)
			
			elif month == 5:
				tus_fri_31(days)
			
			elif month == 6:
				fri_sun_30(days)
			
			elif month == 7:
				sun_wed_31(days)
			
			elif month == 8:
				wed_sat_31(days)
			
			elif month == 9:
				sat_mon_30(days)
			
			elif month == 10:
				mon_thu_31(days)
			
			elif month == 11:
				thu_sat_30(days)
			
			elif month == 12:
				sat_tus_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2002 Year...............................
		
			if month == 1:
				tus_fri_31(days)
			
			elif month == 2:
				fri_fri_28(days)
			
			elif month == 3:
				fri_mon_31(days)
			
			elif month == 4:
				mon_wed_30(days)
			
			elif month == 5:
				wed_sat_31(days)
			
			elif month == 6:
				sat_mon_30(days)
			
			elif month == 7:
				mon_thu_31(days)
			
			elif month == 8:
				thu_sun_31(days)
			
			elif month == 9:
				sun_tus_30(days)
			
			elif month == 10:
				tus_fri_31(days)
			
			elif month == 11:
				fri_sun_30(days)
			
			elif month == 12:
				sun_wed_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2003 Year...............................
		
			if month == 1:
				wed_sat_31(days)
			
			elif month == 2:
				sat_sat_28(days)
			
			elif month == 3:
				sat_tus_31(days)
			
			elif month == 4:
				tus_thu_30(days)
			
			elif month == 5:
				thu_sun_31(days)
			
			elif month == 6:
				sun_tus_30(days)
			
			elif month == 7:
				tus_fri_31(days)
			
			elif month == 8:
				fri_mon_31(days)
			
			elif month == 9:
				mon_wed_30(days)
			
			elif month == 10:
				wed_sat_31(days)
			
			elif month == 11:
				sat_mon_30(days)
			
			elif month == 12:
				mon_thu_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 204 Year...............................
		
			if month == 1:
				thu_sun_31(days)
			
			elif month == 2:
				sun_mon_29(days)
			
			elif month == 3:
				mon_thu_31(days)
			
			elif month == 4:
				thu_sat_30(days)
			
			elif month == 5:
				sat_tus_31(days)
			
			elif month == 6:
				tus_thu_30(days)
			
			elif month == 7:
				thu_sun_31(days)
			
			elif month == 8:
				sun_wed_31(days)
			
			elif month == 9:
				wed_fri_30(days)
			
			elif month == 10:
				fri_mon_31(days)
			
			elif month == 11:
				mon_wed_30(days)
			
			elif month == 12:
				wed_sat_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2005 Year...............................
		
			if month == 1:
				sat_tus_31(days)
			
			elif month == 2:
				tus_tus_28(days)
			
			elif month == 3:
				tus_fri_31(days)
			
			elif month == 4:
				fri_sun_30(days)
			
			elif month == 5:
				sun_wed_31(days)
			
			elif month == 6:
				wed_fri_30(days)
			
			elif month == 7:
				fri_mon_31(days)
			
			elif month == 8:
				mon_thu_31(days)
			
			elif month == 9:
				thu_sat_30(days)
			
			elif month == 10:
				sat_tus_31(days)
			
			elif month == 11:
				tus_thu_30(days)
			
			elif month == 12:
				thu_sun_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2006 Year...............................
		
			if month == 1:
				sun_wed_31(days)
			
			elif month == 2:
				wed_wed_28(days)
			
			elif month == 3:
				wed_sat_31(days)
			
			elif month == 4:
				sat_mon_30(days)
			
			elif month == 5:
				mon_thu_31(days)
			
			elif month == 6:
				thu_sat_30(days)
			
			elif month == 7:
				sat_tus_31(days)
			
			elif month == 8:
				tus_fri_31(days)
			
			elif month == 9:
				fri_sun_30(days)
			
			elif month == 10:
				sun_wed_31(days)
			
			elif month == 11:
				wed_fri_30(days)
			
			elif month == 12:
				fri_mon_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2007 Year...............................
		
			if month == 1:
				mon_thu_31(days)
			
			elif month == 2:
				thu_thu_28(days)
			
			elif month == 3:
				thu_sun_31(days)
			
			elif month == 4:
				sun_tus_30(days)
			
			elif month == 5:
				tus_fri_31(days)
			
			elif month == 6:
				fri_sun_30(days)
			
			elif month == 7:
				sun_wed_31(days)
			
			elif month == 8:
				wed_sat_31(days)
			
			elif month == 9:
				sat_mon_30(days)
			
			elif month == 10:
				mon_thu_31(days)
			
			elif month == 11:
				thu_sat_30(days)
			
			elif month == 12:
				sat_tus_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2008 Year...............................
		
			if month == 1:
				tus_fri_31(days)
			
			elif month == 2:
				fri_sat_29(days)
			
			elif month == 3:
				sat_tus_31(days)
			
			elif month == 4:
				tus_thu_30(days)
			
			elif month == 5:
				thu_sun_31(days)
			
			elif month == 6:
				sun_tus_30(days)
			
			elif month == 7:
				tus_fri_31(days)
			
			elif month == 8:
				fri_mon_31(days)
			
			elif month == 9:
				mon_wed_30(days)
			
			elif month == 10:
				wed_sat_31(days)
			
			elif month == 11:
				sat_mon_30(days)
			
			elif month == 12:
				mon_thu_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2009 Year...............................
		
			if month == 1:
				thu_sun_31(days)
			
			elif month == 2:
				sun_sun_28(days)
			
			elif month == 3:
				sun_wed_31(days)
			
			elif month == 4:
				wed_fri_30(days)
			
			elif month == 5:
				fri_mon_31(days)
			
			elif month == 6:
				mon_wed_30(days)
			
			elif month == 7:
				wed_sat_31(days)
			
			elif month == 8:
				sat_tus_31(days)
			
			elif month == 9:
				tus_thu_30(days)
			
			elif month == 10:
				thu_sun_31(days)
			
			elif month == 11:
				sun_tus_30(days)
			
			elif month == 12:
				tus_fri_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2010 Year...............................
		
			if month == 1:
				fri_mon_31(days)
			
			elif month == 2:
				mon_mon_28(days)
			
			elif month == 3:
				mon_thu_31(days)
			
			elif month == 4:
				thu_sat_30(days)
			
			elif month == 5:
				sat_tus_31(days)
			
			elif month == 6:
				tus_thu_30(days)
			
			elif month == 7:
				thu_sun_31(days)
			
			elif month == 8:
				sun_wed_31(days)
			
			elif month == 9:
				wed_fri_30(days)
			
			elif month == 10:
				fri_mon_31(days)
			
			elif month == 11:
				mon_wed_30(days)
			
			elif month == 12:
				wed_sat_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2011 Year...............................
		
			if month == 1:
				sat_tus_31(days)
			
			elif month == 2:
				tus_tus_28(days)
			
			elif month == 3:
				tus_fri_31(days)
			
			elif month == 4:
				fri_sun_30(days)
			
			elif month == 5:
				sun_wed_31(days)
			
			elif month == 6:
				wed_fri_30(days)
			
			elif month == 7:
				fri_mon_31(days)
			
			elif month == 8:
				mon_thu_31(days)
			
			elif month == 9:
				thu_sat_30(days)
			
			elif month == 10:
				sat_tus_31(days)
			
			elif month == 11:
				tus_thu_30(days)
			
			elif month == 12:
				thu_sun_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2012 Year...............................
		
			if month == 1:
				sun_wed_31(days)
			
			elif month == 2:
				wed_thu_29(days)
			
			elif month == 3:
				thu_sun_31(days)
			
			elif month == 4:
				sun_tus_30(days)
			
			elif month == 5:
				tus_fri_31(days)
			
			elif month == 6:
				fri_sun_30(days)
			
			elif month == 7:
				sun_wed_31(days)
			
			elif month == 8:
				wed_sat_31(days)
			
			elif month == 9:
				sat_mon_30(days)
			
			elif month == 10:
				mon_thu_31(days)
			
			elif month == 11:
				thu_sat_30(days)
			
			elif month == 12:
				sat_tus_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2013 Year...............................
		
			if month == 1:
				tus_fri_31(days)
			
			elif month == 2:
				fri_fri_28(days)
			
			elif month == 3:
				fri_mon_31(days)
			
			elif month == 4:
				mon_wed_30(days)
			
			elif month == 5:
				wed_sat_31(days)
			
			elif month == 6:
				sat_mon_30(days)
			
			elif month == 7:
				mon_thu_31(days)
			
			elif month == 8:
				thu_sun_31(days)
			
			elif month == 9:
				sun_tus_30(days)
			
			elif month == 10:
				tus_fri_31(days)
			
			elif month == 11:
				fri_sun_30(days)
			
			elif month == 12:
				sun_wed_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2014 Year...............................
		
			if month == 1:
				wed_sat_31(days)
			
			elif month == 2:
				sat_sat_28(days)
			
			elif month == 3:
				sat_tus_31(days)
			
			elif month == 4:
				tus_thu_30(days)
			
			elif month == 5:
				thu_sun_31(days)
			
			elif month == 6:
				sun_tus_30(days)
			
			elif month == 7:
				tus_fri_31(days)
			
			elif month == 8:
				fri_mon_31(days)
			
			elif month == 9:
				mon_wed_30(days)
			
			elif month == 10:
				wed_sat_31(days)
			
			elif month == 11:
				sat_mon_30(days)
			
			elif month == 12:
				mon_thu_31(days)
			break
		
		else:
			i+=1
		
		if year == i: # This is 2015 Year...............................
		
			if month == 1:
				thu_sun_31(days)
			
			elif month == 2:
				sun_sun_28(days)
			
			elif month == 3:
				sun_wed_31(days)
			
			elif month == 4:
				wed_fri_30(days)
			
			elif month == 5:
				fri_mon_31(days)
			
			elif month == 6:
				mon_wed_30(days)
			
			elif month == 7:
				wed_sat_31(days)
			
			elif month == 8:
				sat_tus_31(days)
			
			elif month == 9:
				tus_thu_30(days)
			
			elif month == 10:
				thu_sun_31(days)
			
			elif month == 11:
				sun_tus_30(days)
			
			elif month == 12:
				tus_fri_31(days)
			break
		else:
			i+=1

# For showing month........................................................................./
def months(month):
	if month==1:
		print("January")
	elif month==2:
		print("February")
	elif month==3:
		print("March")
	elif month==4:
		print("April")
	elif month==5:
		print("May")
	elif month==6:
		print("June")
	elif month==7:
		print("July")
	elif month==8:
		print("August")
	elif month==9:
		print("September")
	elif month==10:
		print("October")
	elif month==11:
		print("November")
	elif month==12:
		print("December")
	else:
		print(f"What do you means {month}.")
# month function close here................................................................./
# For date of birth ......................................................................../

# Date of birth function close here........................................................./

class DateOfBirth:
	yeari=0
	monthi=0
	dayi=0
	def Birthday(self):
			dayOfAge(self.yeari, self.monthi, self.dayi)
	def date_of_birth(self):
		print("Enter Your Date of Birth:")
		print("==--->> Enter year: ")
		self.yeari = int(input())
		if self.yeari < 1950:
			print(f"Sorry but the value is less than 1970...You Enter {self.yeari}")
			exit()
		if self.yeari == 0:
			print("Sorry But your are wrong here. Year is never Zero. It is start from one okay.")
			exit()
		# elif yeari >= 2023:
		#     print("The value is greater than 2022.We know that you are never Born in this year. {yeari} this is not possible.")
		#     exit()
			
		print("==--->> Enter month: ")
		self.monthi = int(input())
		if self.monthi < 1:
			print("Sorry your are wrong this is month... I Never saw that Month is (0)")
			exit()
		elif self.monthi > 12:
			print("Sorry this is month you enter {self.monthi} month. You Know that Month is never greater than 12")
			exit()
			
		print("==--->> Enter date: ")
		self.dayi = int(input())
		if self.dayi < 1:
			print("The value you enter is {__dayi} date.. I never saw that date is 0")
			exit()
		elif self.dayi > 28:
			# This function check out that the enter value of date is Correct or wrong
			checking_day(self.yeari, self.monthi, self.dayi)
		print("Your date of birth day is: ", end=' ')
	
class NewDate:
	yearf = 0
	monthf = 0
	dayf = 0
	def Newday(self):
			dayOfAge(self.yearf, self.monthf, self.dayf)
	
	def localTime(self):
		import time
		t = time.localtime()
		self.yearf = int(time.strftime('%Y'))
		self.monthf = int(time.strftime('%m'))
		self.dayf = int(time.strftime('%d'))
		print("Today is:", end=' ')

	def set_NewDate_for_Age(self):
		print("Enter new Date:")
		print("==--->> Enter year: ")
		self.yearf = int(input())
		if self.yearf < 2023:
			print("Sorry the value is incorract please corract the value first... I know that this is 2023 ")
			exit()
		elif self.yearf > 2024:
			print("The value is very big we have not calculate this value sorry...")
			exit()
			
		print("==--->> Enter month: ")
		self.monthf = int(input())
		if self.monthf < 1:
			print("Sorry your are wrong this is month...")
			exit()
		elif self.monthf > 12:
			print("Sorry this is month your enter that month is {self.monthf} .")
			exit()
			
		print("==--->> Enter date: ")
		self.dayf = int(input())
		if self.dayf < 1:
			print("The value you enter is {self.dayf} date..")
			exit()
		elif self.dayf > 28:
			checking_day(self.yearf, self.monthf, self.dayf)

class Age(DateOfBirth, NewDate):
	fullDays = 0
	fullYears = 0
	fullMonths = 0
	fullWeeks = 0

	def calculation(self):
		oneyear = 365.25
		onemonth = 30.4375
		deffrence_of_year = (self.yearf - self.yeari) * oneyear
		deffrence_of_month = (self.monthf - self.monthi) * onemonth
		deffrence_of_day = self.dayf - self.dayi;
		net_days = deffrence_of_year + deffrence_of_month + deffrence_of_day
		self.fullDays = net_days
		net_years = net_days / oneyear
		self.fullYears = net_years
		net_months = net_days / onemonth
		self.fullMonths = net_months
		net_weeks = net_days / 7
		self.fullWeeks = net_weeks

	def DisplayAge(self):
		print(f"==---->>> Net Year of your Age is   : {self.fullYears}") 
		print(f"==---->>> Net months of your Age is : {self.fullMonths}")
		print(f"==---->>> Net Weeks of your Age is  : {self.fullWeeks}") 
		print(f"==---->>> Net Days of your Age is   : {self.fullDays}")
# obj = DateOfBirth()
# obj.date_of_birth()
# obj.day()
# obj = NewDate()
# obj.set_NewDate_for_Age()
# obj.day()
obj = Age()
obj.date_of_birth()
obj.Birthday()
# obj.set_NewDate_for_Age()
obj.localTime()
obj.Newday()
obj.calculation()
obj.DisplayAge()