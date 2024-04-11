using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;

public class LocalSaveHandler
{
    public void Save(GameData data)
    {

        BinaryFormatter formatter = new BinaryFormatter();
        string path = Path.Combine(Application.persistentDataPath, "agency.save");
        FileStream stream = new FileStream(path, FileMode.Create);

        //serialize, write to file, then close
        formatter.Serialize(stream, data);
        stream.Close();

    }

    public GameData Load()
    {
        //Debug.Log("Local load: start");

        string path = Path.Combine(Application.persistentDataPath, "agency.save");
        //Debug.Log("Local load: wrote path");

        if (!File.Exists(path)) return null;
        //Debug.Log("Local load: file Exists");

        FileStream stream = new FileStream(path, FileMode.Open);
        //Debug.Log("Local load: created stream");

        BinaryFormatter formatter = new BinaryFormatter();
        //Debug.Log("Local load: created formatter");

        try
        {
            object obj = formatter.Deserialize(stream);
            //Debug.Log("local load: deserialized stream");

            GameData data = obj as GameData;
            //Debug.Log("Local load: casted obj");
            
            stream.Close();
            //Debug.Log("Local load: closed");

            return data;
        }
        catch (Exception e)
        {
            Debug.Log(e);
            return null;
        }
    }
}
