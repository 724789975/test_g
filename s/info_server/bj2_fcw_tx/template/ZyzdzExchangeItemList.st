page = #$page#
pages = #$pages#
teamLevel = #$teamLevel#
pRes=#$pRes#
items= {
	#foreach from=$list item=theItem#
	{
		sid=#$theItem.id#,
		iid=#$theItem.iId#,
		display="#$theItem.displayName#",
		name="#$theItem.name#",
		modified_desc="#$theItem.modifiedDesc#",
		characters={
			#foreach from=$theItem.characterList item=ids# 
				#$ids#, 
			#/foreach#
		},
		description ="#$theItem.description#",
		sendperson = #$theItem.isHot#,
		buyRecordTimes=#$theItem.buyRecordTimes#,
		#if $theItem.sysItem.wId==4# 
			wid = #$theItem.sysItem.wId#, 
		#/if#
		common={
			level = #$theItem.level#,
			type = #$theItem.type#,
			subtype = #$theItem.subType#,
			#if $theItem.type==1# 
				wid=#$theItem.wId#, 
			#/if#
			seq=#$theItem.seq#,
			is_vip=#$theItem.isVip#,
			is_new=#$theItem.isNew#,
			is_hot=#$theItem.isHot#,
			is_web=#$theItem.isWeb#,
			is_exchange=#$theItem.isExchange#,
			star=#$theItem.figthNumOutput#,    		
			strength= 
				#if $theItem.isStrengthen == 0# 
					-1 ,
				#else#  
					#$theItem.strengthLevel#  ,
				#/if#
			cResistanceFire=#$theItem.cResistanceFire#,
			cResistanceBlast=#$theItem.cResistanceBlast#,
			cResistanceBullet=#$theItem.cResistanceBullet#,
			cResistanceKnife=#$theItem.cResistanceKnife#,
			cBloodAdd=#$theItem.cBloodAdd#,
			cResistanceFire_add=0,
			cResistanceBlast_add=0,
			cResistanceBullet_add=0,
			cResistanceKnife_add=0,
			cBloodAdd_add=0,
			rareLevel=#$theItem.rareLevel#,
		},
		performance = {
			damange = #$theItem.damange#,					
			speed =#$theItem.shootSpeed#,	
			ammos = #$theItem.wAmmoOneClip#,
			ammo_count=#$theItem.wAmmoCount#,				
		},
		color=#$theItem.gunProperty.color#,
		gunproperty={
	    		#foreach from=$theItem.gunProperty.propertyList item=property# 
			{
	    			#if $theItem.gunProperty.color!=1# 
					#$theItem.gunProperty.color#,
				#else# 
					1,
				#/if#
	    			"#$property.basePropertyStr#"
			}, 
			#/foreach#
		},
		package = {
			#foreach from=$theItem.packages item=item# 
				"#$item.displayName#", 
			#/foreach#
		},
		resPricesList={
			#foreach from=$theItem.allResPricesList item=pay# 
	    		{id=#$pay.id#,unittype=#$pay.unitType#,cost=#$pay.cost#,unit=#$pay.unit#,}, 
			#/foreach#
		},
		resDisPricesList={
			#foreach from=$theItem.allResDisPricesList item=pay# 
	    		{id=#$pay.id#,unittype=#$pay.unitType#,cost=#$pay.cost#,unit=#$pay.unit#,}, 
			#/foreach#
		},
		resource = {
			#if $theItem.type==1# 
				type=#$theItem.wId#, 
				#foreach from=$theItem.resource item=res#  
					#if($res!="")# 
						"#$res#", 
					#/if# 
				#/foreach#
			#elseif $theItem.type==2# 
				type=#$theItem.cId#,
				#foreach from=$theItem.resources item=resource# 
					"#$resource#", 
				#/foreach#
			#elseif $theItem.type==3# 
				type=#$theItem.cId#,
				#foreach from=$theItem.resources item=resource# 
					"#$resource#", 
				#/foreach#
			#else#
				#foreach from=$theItem.resources item=resource# 
					"#$resource#", 
				#/foreach#
			#/if#
		},
	},
	#/foreach#
}