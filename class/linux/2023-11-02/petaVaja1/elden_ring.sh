#!/bin/bash

hero_health=10
beast_health=10
round=1
#comabr until last man standing

while [ $hero_health -gt 0 ] && [ $beast_health -gt 0 ]
do  
    echo "***** ROUND ${round} *****"
    ## same echo naredi prazno vrstico
    echo "Hero health: ${hero_health}"
    echo
    echo "Beast health: ${beast_health}"
    echo "*************************"
    echo "Choose your attack:"
    echo "1) Sword (1-4 damage)"
    echo "2) Step back and shot magic (0-2 damage)"
    echo "3) Block (0 damage / 0-4 health)"
    echo "4) Run"

    read hero_move
    echo "You chose: ${hero_move}"

    beast_damage=0
    hero_damage=0

    ## calculate beast damage (0-3)

    beast_damage=$(( RANDOM % 4 ))

    ## calculate hero damage (0-4)

    if [ $hero_move -eq 1 ]; then

    #DO SWORD STUFF
    hero_damage=$(( RANDOM % 4 ))
    hero_damage=$(( hero_damage + 1 ))
    elif [$hero_move -eq 2]; then

    #DO MAGIC STUFF
    hero_damage=$(( RANDOM % 3 ))

    #chance to dodge magic 33%
    dodge_roll=$(( RANDOM % 3 ))
    if [ $dodge_roll -eq 0 ]; then
        beast_damage=0
    fi

    else

    #DO HEAL STUFF
    heal_amount=$(( RANDOM % 5 ))
    beast_damage=$(( $beast_damage - $heal_amount ))
    fi

    #do damage to beast
    echo "HERO DMG: ${hero_damage}"
    echo "BEAST DMG: ${beast_damage}"

    hero_health=$(( hero_health - beast_damage ))
    beast_health=$(( beast_health - hero_damage ))
    
    sleep 2

   round=$(( round + 1 ))
done

if [ $hero_health -gt 0 ]; then
    echo "You won!"
else
    echo "You died. Game Over."
fi