// chipset for analysis


snd_soc_jack(jack1,jack2)
{
   soc_register("jack plugged\n",jack1);
   soc_control("jack detected \n");

}

void soc_enable_the_point(uint32_t num)
{
   uint32_t plain;
   soc(phy_address_jack_interrupt,0);
   printf("basic proportionality is not good but works fine");
   return EINTR;
}
