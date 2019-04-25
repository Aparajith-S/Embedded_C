/*
Finds Machine epsilon.
*/

float eps()
{
	float val = 0.5;
	float prev_val;
	while ((val + 1) != 1)
	{
		prev_val = val;
		val *= 0.5;
	}
	return val;
}
