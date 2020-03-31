#include <YSI_Coding\y_hooks>

AntiDeAMX()
{
    new antiDeAMX[][] =
    {
        "Unarmed (Fist)",
        "Brass K"
    };
    #pragma unused antiDeAMX
}

hook OnGamemodeInt()
{
    AntiDeAMX();
    return 1;
}