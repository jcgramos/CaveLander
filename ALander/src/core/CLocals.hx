package core;

import openfl.Assets;

class CLocalsProxy extends haxe.xml.Proxy<"assets/localization.xml", String> { }

class CLocals {
    public static var all  = new Map<String, String>();
    public static var text  = new CLocalsProxy(all.get);
    
    public static function set( ?lang:String = "en" ) : Void {
        var l_xmlString =  Assets.getText("assets/localization.xml" );
        var l_xmlFast   = new haxe.xml.Fast( Xml.parse( l_xmlString ).firstElement() );
        for ( i_node in l_xmlFast.nodes.item ) {
            var l_text:String ="";
			switch ( lang ) {
                case "en" : l_text = i_node.node.en.innerData;
                // if there's no french, use english instead
                case "es" : l_text = ( i_node.hasNode.es ) ? i_node.node.es.innerData : i_node.node.en.innerData;
                case "fr" : l_text = ( i_node.hasNode.fr ) ? i_node.node.fr.innerData : i_node.node.en.innerData;
            }
            all.set( i_node.att.id, l_text );
        }
    }
}