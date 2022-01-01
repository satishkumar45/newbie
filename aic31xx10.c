#define dacflag 0x1000
snd_soc_jack(jack1,jack2)
{
   soc_register("jack plugged\n",jack1);
   soc_control("jack detected \n");
   soc_bits(dacflag,12);
}
