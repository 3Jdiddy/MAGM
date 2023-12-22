PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid::
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "NORMAN became our town's new\n"
	.string "GYM LEADER.\p"
	.string "I think he called his family over from\n"
	.string "somewhere far away.$"

PetalburgCity_House2_Text_BattledNormanOnce:
	.string "I battled NORMAN once, but, whew,\n"
	.string "he was way too strong.\p"
	.string "How would I put it?\p"
	.string "I just got the feeling that he\n"
	.string "lives for POKéMON.$"

FirstCutScene1::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY_HOUSE2
    faceplayer
    applymovement OBJ_EVENT_ID_PLAYER, MyEvent_Movement_PlayerCircle1
    waitmovement 0
    msgbox MyEvent_Text_PlayerDialogue1, MSGBOX_DEFAULT
    closemessage
    release
    end

MyEvent_Movement_PlayerCircle1::
    walk_right
    walk_right
    walk_down
    walk_down
    walk_left
    walk_left
    walk_up
    walk_up
    step_end

MyEvent_Text_PlayerDialogue1::
    .string "WOAH$"


