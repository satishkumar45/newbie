// chipset for analysis


snd_soc_jack(jack1,jack2)
{
   soc_register("jack plugged\n",jack1);
   soc_control("jack detected \n");

}
