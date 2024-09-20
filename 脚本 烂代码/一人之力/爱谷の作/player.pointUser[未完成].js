function Listener(eventType,listener,bus){
 var MinecraftForge=Java.type("net.minecraftforge.common.MinecraftForge");
 this.eventType=eventType;
 this.listener=listener;
 this.bus=(bus==null)?MinecraftForge.EVENT_BUS:bus;
 this.getEventType=function(){
  return this.eventType;
 }
 this.getListener=function(){
  return this.listener;
 }
 this.getBus=function(){
  return this.bus;
 }
}
/**
*EventListener listenEvent(String eventType,String priority,function listener)
*-eventType:你要监听的事件的类路径 如net.minecraftforge.event.ServerChatEvent
*-priority:你的事件优先级 从低到高LOWEST LOW NORMAL HIGH HIGHEST
*-listener:事件方法
*Return:
*-EventListener:事件监听者
*监听事件并返回监听对象
*bus: event.entityPlayer在这个事件就是玩家
*/
function listenEvent(eventType,priority,listener,bus){
 var Event=Java.type(eventType);
    try{
     var IEventListener=Java.type("net.minecraftforge.fml.common.eventhandler.IEventListener");
     var EventPriority=Java.type("net.minecraftforge.fml.common.eventhandler.EventPriority");
    }catch(err){
     var IEventListener=Java.type("cpw.mods.fml.common.eventhandler.IEventListener");
     var EventPriority=Java.type("cpw.mods.fml.common.eventhandler.EventPriority");
    }
 var MinecraftForge=Java.type("net.minecraftforge.common.MinecraftForge");
 var event=new Event();
    if(priority=="LOW"){
     priority=EventPriority.LOW;
    }
    if(priority=="HIGH"){
     priority=EventPriority.HIGH;
    }
    if(priority=="NORMAL"){
     priority=EventPriority.NORMAL;
    }
    if(priority=="LOWEST"){
     priority=EventPriority.LOWEST;
    }
    if(priority=="HIGHEST"){
     priority=EventPriority.HIGHEST;
    }
 var EventListener=Java.extend(IEventListener,{
  invoke:listener
 });
 listener=new EventListener();
 var bus=(bus==null)?MinecraftForge.EVENT_BUS:bus;
 var busID=bus.class.getDeclaredField("busID");
 busID.setAccessible(true);
 busID=busID.getInt(bus);
 event.getListenerList().register(busID,priority,listener);
 return new Listener(eventType,listener,bus);
}
/**
*void unListenEvent(IEventListener listener)
*-listener:事件方法
*取消监听事件
*/
function unListenEvent(eventType,listener,bus){
 var Event=Java.type(eventType);
 var MinecraftForge=Java.type("net.minecraftforge.common.MinecraftForge");
 var event=new Event();
 var bus=(bus==null)?MinecraftForge.EVENT_BUS:bus;
 var busID=bus.class.getDeclaredField("busID");
 busID.setAccessible(true);
 busID=busID.getInt(bus);
 event.getListenerList().unregister(busID,listener);
}
/**
*@Author Hueihuea
*著作权属于Hueihuea 2019/6/16起生效
*/

listenEvent("net.minecraftforge.event.ServerChatEvent","HIGHEST",function(event){
	var ChatComponentText=Java.type("net.minecraft.util.ChatComponentText");
	var MinecraftServer=Java.type("net.minecraft.server.MinecraftServer");
	var EntityPlayerMP=Java.type("net.minecraft.entity.player.EntityPlayerMP");
	if(!(event.player instanceof EntityPlayerMP)){
         return; 
	}
	var player = getPlayer(event.username);
	/**说话的人[不可用getName获得名字]**/
    if(player==null){
	     return;
	}
	event.setCanceled(true);
	if(world.getScoreboard().getTeam(event.username)!==null){		
	     var qz=world.getScoreboard().getTeam(event.username).getName()
    }else{
	var qz=null
	}
     var myDate = new Date();
     var time="§d[§d"+myDate.getHours()+"§d:§d"+myDate.getMinutes()+"§d:§d"+myDate.getSeconds()+"§d]"	
     /**自由代码**/
	 //npc.say("说话者"+event.username)//删掉这行就无提示
	 var message = event.message+"";
     var players = world.getAllServerPlayers();
	 for(i in players){
		 players[i].sendMessage("§7[§a+§7]§f"+time+qz+"§f"+event.username+"§a>>>§f "+message)
		 }/**确保聊天正常**/
	}	 
);
/**
*@Author GXW_SA[爱谷]
*著作权属于GXW_SA[爱谷] 2020/7/27起生效
*/

function getPlayer(playerName){
 var MinecraftServer=Java.type("net.minecraft.server.MinecraftServer");
 var ScriptController=Java.type("noppes.npcs.controllers.ScriptController");
 var playerList=MinecraftServer.func_71276_C().func_71203_ab().field_72404_b;
 var player;
    for (var i=0;i<playerList.size();i++) {
      player=ScriptController.Instance.getScriptForEntity(playerList.get(i));
        if(player.getName()==playerName){
         return player;
        }
    }
}
/**
此段作者不明
**/
var apl=world.getAllServerPlayers()
for(i in apl){
apl[i].sendMessage("§b§l[可耐的爱谷]§r叮咚!聊天脚本注册成功!哦吼吼!")
}




